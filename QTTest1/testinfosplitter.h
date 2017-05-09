#ifndef TESTINFOSPLITTER_H
#define TESTINFOSPLITTER_H

#include <QWidget>
#include "ui_testinfosplitter.h"

class TestInfoSplitter : public QWidget
{
	Q_OBJECT

public:
	TestInfoSplitter(QWidget *parent = 0);
	~TestInfoSplitter();

private:
	Ui::TestInfoSplitter ui;
};

#endif // TESTINFOSPLITTER_H
