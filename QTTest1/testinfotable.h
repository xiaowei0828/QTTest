#ifndef TESTINFOTABLE_H
#define TESTINFOTABLE_H

#include <QWidget>
#include "ui_testinfotable.h"

class TestInfoTable : public QWidget
{
	Q_OBJECT

public:
	TestInfoTable(QWidget *parent = 0);
	~TestInfoTable();

private:
	Ui::TestInfoTable ui;
};

#endif // TESTINFOTABLE_H
