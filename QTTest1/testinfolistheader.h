#ifndef TESTINFOLISTHEADER_H
#define TESTINFOLISTHEADER_H

#include <QWidget>
#include "ui_testinfolistheader.h"

class TestInfoListHeader : public QWidget
{
	Q_OBJECT

public:
	TestInfoListHeader(QWidget *parent = 0);
	~TestInfoListHeader();

	void SetInfo(const QString& paperName, const QString& subject, const QString& time);

private:
	Ui::TestInfoListHeader ui;
};

#endif // TESTINFOLISTHEADER_H
