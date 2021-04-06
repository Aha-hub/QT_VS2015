#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DustMonSysT.h"
#include <QUdpSocket>
#include "MachDate.h"
#include <QDateTime>
#include <QTimer>

class DustMonSysT : public QMainWindow
{
	Q_OBJECT

public:
	DustMonSysT(QWidget *parent = Q_NULLPTR);

private:
	Ui::DustMonSysTClass ui;
	QUdpSocket*						udp;			// udp通信
	QList<QPair<QString, QVariant>> m_value;		// 存储临时临时数据
	MachDate*						m_machine;		// 获取硬件信息
	QTimer*							m_timer;		// 计时器刷新

	void			flushDate();	// 显示界面刷新	
	// table 刷新
	// row		一共多少行数据
	void			flushTable(int row, QSqlQuery& query);


private slots:

	void SlotgetMsg();
	void SoltChangePage0();
	void SoltChangePage1();
	void SoltTimeOut();

	/////// ---------- test---------- /////
	void SoltTextCon();
	void SoltAddDate();
	void SoltGetDate();
};
