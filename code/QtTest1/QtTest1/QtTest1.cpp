#include "QtTest1.h"
#include <QDebug>
#include <QTextCodec> //ת���ַ�ͷ�ļ�

QTextCodec *codec;

QtTest1::QtTest1(QWidget *parent)
	: QMainWindow(parent)
{
	//����ǩ��������
	ui.setupUi(this);
	ui.label_2->setText("Hello Qt!");
	//���༭�������������ݣ�������
	ui.textEdit->setText("Hello NeaL!");


	//���༭��������������
	//ui.label_3->setText("��ã�");
	//��ʼ��codec
	codec = QTextCodec::codecForName("GBK");
	//ת��
	char *pstr = "��ã�����";
	ui.label_3->setText(codec->toUnicode(pstr));


	//��ȡ��ǩ���ݣ�����ֵΪQString
	QString str;
	str = ui.label_2->text();
	qDebug() << "Output";
}


