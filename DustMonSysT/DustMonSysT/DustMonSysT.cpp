#include "DustMonSysT.h"
#include <QTableWidgetItem>
DustMonSysT::DustMonSysT(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	udp = new QUdpSocket(this);
	m_machine = new MachDate;
	m_timer = new QTimer;

	udp->bind(6666);
	
	// 定时器 写入数据库
	m_timer->start(0);
	m_timer->setInterval(10000);
	// 点击 button 切换 index

	connect(udp, &QUdpSocket::readyRead, this, &DustMonSysT::SlotgetMsg);
	connect(ui.pbHistory, &QPushButton::clicked, this, &DustMonSysT::SoltChangePage1);
	connect(ui.pbNow, &QPushButton::clicked, this, &DustMonSysT::SoltChangePage0);
	connect(m_timer, &QTimer::timeout, this, &DustMonSysT::SoltTimeOut);
	////////// ----- test ----- /////////、
	connect(ui.pushButton_3, &QPushButton::clicked, this, &DustMonSysT::SoltTextCon);
	connect(ui.pushButton, &QPushButton::clicked, this, &DustMonSysT::SoltAddDate);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &DustMonSysT::SoltGetDate);
}

void DustMonSysT::flushDate()
{
	// pm2.5
	ui.lcdPm25->display(m_value[0].second.toInt());
	// pm10
	ui.lcdPm10->display(m_value[2].second.toInt());
	// 温度
	ui.lcdHum->display(m_value[6].second.toString());
	// 湿度
	ui.lcdTem->display(m_value[7].second.toString());
}


void DustMonSysT::flushTable(int row, QSqlQuery& query)
{
	if (ui.tableWidget->rowCount() < row)
		ui.tableWidget->setRowCount(row);

 	for (int i = 0; i < row; i++)
 	{
		query.next();
 		for (int j = 0; j < ui.tableWidget->columnCount(); j++)
 		{
 			QTableWidgetItem* item = new QTableWidgetItem;
 			QString str = query.value(j).toString();
 			item->setText(str);
 			ui.tableWidget->setItem(i, j, item);
 		}
 	}
}

void DustMonSysT::SoltTextCon()
{
	if (m_machine->conSql())
	{
		qDebug() << "success!";
		m_machine->creatTab();
	}
	else
	{
		qDebug() << "fail";
	}
}

void DustMonSysT::SoltAddDate()
{
	qDebug() << "success";
	m_machine->conSql();
	m_machine->creatTab();
	m_machine->inserDataT();
}

void DustMonSysT::SoltGetDate()
{
	QSqlQuery query = m_machine->getDate();
// 	for (int i = 0; i < query.size(); i++)
// 	{
// 		query.next();
// 		qDebug() << query.value(0);
// 		qDebug() << query.value(1);
// 		qDebug() << query.value(2);
// 		qDebug() << query.value(3);
// 		qDebug() << query.value(4);
// 	}
// 	int a = 5;
	flushTable(query.size(), query);
}

void DustMonSysT::SoltChangePage0()
{
	ui.stackedWidget->setCurrentIndex(0);
}

void DustMonSysT::SoltChangePage1()
{
	ui.stackedWidget->setCurrentIndex(1);
}

void DustMonSysT::SoltTimeOut()
{
	qDebug() << "time out!";
	if(!m_value.isEmpty())
		m_machine->inserDate(m_value);
}

void DustMonSysT::SlotgetMsg()
{
	// 获取内存大小
	qint64 size = udp->pendingDatagramSize();
	// 设置存储大小
	QByteArray array = QByteArray(size, 0);
	// 读取数据
	udp->readDatagram(array.data(), size);

	// QByteArray 转 QString
	QString value;
	value.prepend(array);

	// 字符串分割
	QStringList valueList = value.split('#');

	// 清楚旧数据
	m_value.clear();

	for (int i = 0; i < valueList.size() - 1; i = i + 2)
	{
		QPair<QString, QVariant> temValue;
		temValue.first = valueList[i];
		temValue.second = valueList[i + 1];
		m_value.push_back(temValue);
	}
	
	/*QList<QPair<QString, QVariant>>::iterator itbegin = m_value.begin();
	QList<QPair<QString, QVariant>>::iterator itend = m_value.end();

	for (itbegin; itbegin != itend; itbegin++)
	{
		qDebug() << itbegin->first;
		qDebug() << itbegin->second;
	}
	qDebug() << "----------------------------------------------";*/

	// 刷新界面
	flushDate();
}