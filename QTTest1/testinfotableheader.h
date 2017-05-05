#ifndef TESTINFOTABLEHEADER_H
#define TESTINFOTABLEHEADER_H

#include <QWidget>
#include "ui_testinfotableheader.h"

class TestInfoTableHeader : public QWidget
{
	Q_OBJECT

public:
	TestInfoTableHeader(QWidget *parent = 0);
	~TestInfoTableHeader();

	void SetInfo(const QString& testName, const QString& grade, const QString& testType);

private:
	Ui::TestInfoTableHeader ui;
};

#endif // TESTINFOTABLEHEADER_H
