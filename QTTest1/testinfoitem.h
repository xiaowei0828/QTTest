#ifndef TESTINFOITEM_H
#define TESTINFOITEM_H

#include <QWidget>
#include "ui_testinfoitem.h"

class TestInfoItem : public QWidget
{
	Q_OBJECT

public:
	TestInfoItem(QWidget *parent = 0);
	~TestInfoItem();

protected:
	void paintEvent(QPaintEvent *event) override;
private:
	void Init();
	Ui::TestInfoItem ui;
};

#endif // TESTINFOITEM_H
