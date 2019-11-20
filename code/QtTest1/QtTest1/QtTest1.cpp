#include "QtTest1.h"
#include <QDebug>
#include <QMessageBox>
#include <QTextCodec> //转换字符头文件

QTextCodec *codec;

QtTest1::QtTest1(QWidget *parent)
	: QMainWindow(parent)
{
	//给标签设置内容
	ui.setupUi(this);
	ui.label_2->setText("+");
	//给编辑区设置中文内容，会乱码
	ui.textEdit->setText("Hello NeaL!");

	ui.label_3->setText("=");

	////给编辑区设置中文内容
	////ui.label_3->setText("你好！");
	////初始化codec
	//codec = QTextCodec::codecForName("GBK");
	////转换
	//char *pstr = "你好！！！";
	//ui.label_3->setText(codec->toUnicode(pstr));


	//获取标签内容，返回值为QString
	QString str;
	str = ui.label_2->text();
	qDebug() << "Output";
}

//spinBox加法实现
void QtTest1::inPut1_ValueChanged(int value)
{
	ui.spinResult->setText(QString::number(value + ui.inPut2->value()));
}

void QtTest1::inPut2_ValueChanged(int value)
{
	ui.spinResult->setText(QString::number(value + ui.inPut1->value()));
}

//点击菜单NeaL
void QtTest1::on_menuNeaL_clicked()
{
	QMessageBox();
}

