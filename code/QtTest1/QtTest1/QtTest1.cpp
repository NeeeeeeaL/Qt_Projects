#include "QtTest1.h"
#include <QDebug>
#include <QMessageBox>
#include <QTextCodec> //ת���ַ�ͷ�ļ�

QTextCodec *codec;

QtTest1::QtTest1(QWidget *parent)
	: QMainWindow(parent)
{
	//����ǩ��������
	ui.setupUi(this);
	ui.label_2->setText("+");
	//���༭�������������ݣ�������
	ui.textEdit->setText("Hello NeaL!");

	ui.label_3->setText("=");

	////���༭��������������
	////ui.label_3->setText("��ã�");
	////��ʼ��codec
	//codec = QTextCodec::codecForName("GBK");
	////ת��
	//char *pstr = "��ã�����";
	//ui.label_3->setText(codec->toUnicode(pstr));


	//��ȡ��ǩ���ݣ�����ֵΪQString
	QString str;
	str = ui.label_2->text();
	qDebug() << "Output";
}

//spinBox�ӷ�ʵ��
void QtTest1::inPut1_ValueChanged(int value)
{
	ui.spinResult->setText(QString::number(value + ui.inPut2->value()));
}

void QtTest1::inPut2_ValueChanged(int value)
{
	ui.spinResult->setText(QString::number(value + ui.inPut1->value()));
}

//����˵�NeaL
void QtTest1::on_menuNeaL_clicked()
{
	QMessageBox();
}

