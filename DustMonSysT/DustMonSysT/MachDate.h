#pragma once
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QTime>

class MachDate
{
public:
	
	MachDate();
	~MachDate();

	QSqlDatabase	m_db;				// 数据库
	QSqlQuery		m_query;
	QString			m_current_date;		// 当前日期
	QString			m_current_time;		// 当前时间

	bool		conSql();				// 连接数据库
	void		creatTab();				// 创建表格
	void		inserDate(QList<QPair<QString, QVariant>> &value);	// 插入数据
	void		getTime();				// 获取时间
	QSqlQuery	getDate();				// 获取数据

	//////////////////////////////// 测试数据 /////////////////////////////////////
	void		inserDataT();			// 插入数据测试	
};

