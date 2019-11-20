#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtTest1.h"

class QtTest1 : public QMainWindow
{
	Q_OBJECT

public:
	QtTest1(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtTest1Class ui;

	private slots:
	void inPut1_ValueChanged(int value);
	void inPut2_ValueChanged(int value);
	void on_menuNeaL_clicked();

};
