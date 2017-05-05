#ifndef CHILDDIALOG_H
#define CHILDDIALOG_H

#include <QWidget>
#include "ui_childdialog.h"

class ChildDialog : public QWidget
{
	Q_OBJECT

public:
	ChildDialog(QWidget *parent = 0);
	~ChildDialog();

private:
	Ui::ChildDialog ui;
};

#endif // CHILDDIALOG_H
