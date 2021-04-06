/********************************************************************************
** Form generated from reading UI file 'DustMonSysT.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUSTMONSYST_H
#define UI_DUSTMONSYST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DustMonSysTClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QPushButton *pbHistory;
    QPushButton *pbNow;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *lcdPm25;
    QLCDNumber *lcdPm10;
    QLCDNumber *lcdTem;
    QLCDNumber *lcdHum;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DustMonSysTClass)
    {
        if (DustMonSysTClass->objectName().isEmpty())
            DustMonSysTClass->setObjectName(QStringLiteral("DustMonSysTClass"));
        DustMonSysTClass->resize(770, 598);
        centralWidget = new QWidget(DustMonSysTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        pbHistory = new QPushButton(widget);
        pbHistory->setObjectName(QStringLiteral("pbHistory"));
        pbHistory->setGeometry(QRect(30, 100, 93, 28));
        pbNow = new QPushButton(widget);
        pbNow->setObjectName(QStringLiteral("pbNow"));
        pbNow->setGeometry(QRect(30, 40, 93, 28));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 150, 93, 28));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 200, 93, 28));

        horizontalLayout_2->addWidget(widget);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lcdPm25 = new QLCDNumber(page);
        lcdPm25->setObjectName(QStringLiteral("lcdPm25"));

        verticalLayout_2->addWidget(lcdPm25);

        lcdPm10 = new QLCDNumber(page);
        lcdPm10->setObjectName(QStringLiteral("lcdPm10"));

        verticalLayout_2->addWidget(lcdPm10);

        lcdTem = new QLCDNumber(page);
        lcdTem->setObjectName(QStringLiteral("lcdTem"));

        verticalLayout_2->addWidget(lcdTem);

        lcdHum = new QLCDNumber(page);
        lcdHum->setObjectName(QStringLiteral("lcdHum"));

        verticalLayout_2->addWidget(lcdHum);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_9);


        horizontalLayout->addLayout(verticalLayout_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_2 = new QWidget(page_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        tableWidget = new QTableWidget(widget_2);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem9);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(100, 80, 461, 271));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 30, 93, 28));

        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        horizontalLayout_2->addWidget(stackedWidget);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        verticalLayout_4->addLayout(horizontalLayout_2);

        DustMonSysTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DustMonSysTClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 770, 26));
        DustMonSysTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DustMonSysTClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DustMonSysTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DustMonSysTClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DustMonSysTClass->setStatusBar(statusBar);

        retranslateUi(DustMonSysTClass);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DustMonSysTClass);
    } // setupUi

    void retranslateUi(QMainWindow *DustMonSysTClass)
    {
        DustMonSysTClass->setWindowTitle(QApplication::translate("DustMonSysTClass", "DustMonSysT", Q_NULLPTR));
        label->setText(QApplication::translate("DustMonSysTClass", "\346\211\254\345\260\230\346\243\200\346\265\213", Q_NULLPTR));
        pbHistory->setText(QApplication::translate("DustMonSysTClass", "\345\216\206\345\217\262", Q_NULLPTR));
        pbNow->setText(QApplication::translate("DustMonSysTClass", "\345\256\236\346\227\266", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("DustMonSysTClass", "PushButton", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DustMonSysTClass", "Test", Q_NULLPTR));
        label_2->setText(QApplication::translate("DustMonSysTClass", "PM2.5", Q_NULLPTR));
        label_3->setText(QApplication::translate("DustMonSysTClass", "PM10", Q_NULLPTR));
        label_4->setText(QApplication::translate("DustMonSysTClass", "\346\271\277\345\272\246", Q_NULLPTR));
        label_5->setText(QApplication::translate("DustMonSysTClass", "\346\270\251\345\272\246", Q_NULLPTR));
        label_6->setText(QApplication::translate("DustMonSysTClass", "\316\274g/m3", Q_NULLPTR));
        label_7->setText(QApplication::translate("DustMonSysTClass", "\316\274g/m3", Q_NULLPTR));
        label_8->setText(QApplication::translate("DustMonSysTClass", "\342\204\203", Q_NULLPTR));
        label_9->setText(QApplication::translate("DustMonSysTClass", "%", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DustMonSysTClass", "Pm25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DustMonSysTClass", "Pm10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DustMonSysTClass", "\346\270\251\345\272\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DustMonSysTClass", "\346\271\277\345\272\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DustMonSysTClass", "\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("DustMonSysTClass", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("DustMonSysTClass", "pm10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 2);
        ___qtablewidgetitem7->setText(QApplication::translate("DustMonSysTClass", "pm25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 3);
        ___qtablewidgetitem8->setText(QApplication::translate("DustMonSysTClass", "52", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 4);
        ___qtablewidgetitem9->setText(QApplication::translate("DustMonSysTClass", "25", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_2->setText(QApplication::translate("DustMonSysTClass", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DustMonSysTClass: public Ui_DustMonSysTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUSTMONSYST_H
