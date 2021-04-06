#include "MachDate.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <typeinfo>

MachDate::MachDate()
{
	m_db = QSqlDatabase::addDatabase("QMYSQL");
	m_query = QSqlQuery(m_db);
	m_current_date = "";
	m_current_time = "";
}

MachDate::~MachDate()
{

}

bool MachDate::conSql()
{
	/*QSqlDatabase datebase;
	if (QSqlDatabase::contains("qt_sql_default_connection"))
		m_db = QSqlDatabase::database("qt_sql_default_connection");
	else
		m_db = QSqlDatabase::addDatabase("QSQLITE");*/

	//连接数据库
	m_db.setHostName("localhost");
	m_db.setPort(3306);
	m_db.setDatabaseName("mydata");       //这里输入你的数据库名
	m_db.setUserName("root");
	m_db.setPassword("111111");   //这里输入你的密码
	if (!m_db.open()) {
		QMessageBox::critical(0, QObject::tr("无法打开数据库"),
			"无法创建数据库连接！ ", QMessageBox::Cancel);
		return false;
	}
	return true;
}

void MachDate::creatTab()
{
	//// 创建 course 表
	m_query.exec("create table basedate ("
		"PM25 varchar(20), "
		"PM10 varchar(20), "
		"HUMIDITY varchar(20), "
		"TEACHER varchar(20), "
		"Time time(3))");
}
// 插入数据
void MachDate::inserDate(QList<QPair<QString, QVariant>> &value)
{
	getTime();

	QString cmd = "insert into basedate values(%1, %2, %3, %4, '%5')";
	QString cmdPm25 = cmd.arg(value[0].second.toInt())
						.arg(value[2].second.toInt())
						.arg(value[6].second.toString())
						.arg(value[7].second.toString())
						.arg(m_current_time);
	qDebug() << m_current_time;
	qDebug() << cmdPm25;
	m_query.exec(cmdPm25);
}

void MachDate::getTime()
{
	QDateTime current_date_time = QDateTime::currentDateTime();
	m_current_date = current_date_time.toString("yyyy.MM.dd");
	m_current_time = current_date_time.toString("hh:mm:ss");
	// m_current_time = current_date_time.toString("mm-ss");
}

QSqlQuery MachDate::getDate()
{
	QString cmd = "select * from basedate";
	m_query.exec(cmd);
// 	while (m_query.next())
// 	{
// 		qDebug() << m_query.value(0);
// 		qDebug() << m_query.value(1);
// 		qDebug() << m_query.value(2);
// 		qDebug() << m_query.value(3);
// 		qDebug() << m_query.value(4);
// 		qDebug() << typeid(m_query).name();
// 	}
	return m_query;
}

void MachDate::inserDataT()
{
	QString cmd = "insert into basedate values(%1, %2, %3, %4, '%5')";

	QString cmdPm25 = cmd.arg(1)
		.arg(2)
		.arg(2)
		.arg(2)
		.arg("02:01:02");
	
	qDebug() << cmdPm25;
	m_query.exec(cmdPm25);
}
