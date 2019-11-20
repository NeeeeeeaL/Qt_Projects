#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtTest2.h"

class QtTest2 : public QMainWindow
{
	Q_OBJECT

public:
	QtTest2(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtTest2Class ui;
};
