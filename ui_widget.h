/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Mon Jul 2 20:18:21 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *socket;
    QPushButton *connect;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QPushButton *pushButtonSend;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 411);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        socket = new QLineEdit(Widget);
        socket->setObjectName(QString::fromUtf8("socket"));

        horizontalLayout->addWidget(socket);

        connect = new QPushButton(Widget);
        connect->setObjectName(QString::fromUtf8("connect"));

        horizontalLayout->addWidget(connect);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(Widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 380, 323));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setReadOnly(false);

        gridLayout_2->addWidget(textBrowser, 1, 0, 1, 1);

        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setReadOnly(true);

        gridLayout_2->addWidget(textBrowser_2, 3, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        pushButtonSend = new QPushButton(Widget);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));

        verticalLayout->addWidget(pushButtonSend);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Client2", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "Socket:", 0, QApplication::UnicodeUTF8));
        connect->setText(QApplication::translate("Widget", "Connect", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Input:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "Output:", 0, QApplication::UnicodeUTF8));
        pushButtonSend->setText(QApplication::translate("Widget", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
