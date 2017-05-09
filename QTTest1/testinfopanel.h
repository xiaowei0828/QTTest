#ifndef TESTINFOPANEL_H
#define TESTINFOPANEL_H

#include <QWidget>
#include "ui_testinfopanel.h"

class TestInfoPanel : public QWidget
{
	Q_OBJECT

public:
	TestInfoPanel(QWidget *parent = 0);
	~TestInfoPanel();

private:
	Ui::TestInfoPanel ui;
};

#endif // TESTINFOPANEL_H
