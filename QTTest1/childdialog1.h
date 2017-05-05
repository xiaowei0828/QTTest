#ifndef CHILDDIALOG1_H
#define CHILDDIALOG1_H

#include <QDialog>
#include "ui_childdialog1.h"

class ChildDialog1 : public QDialog
{
	Q_OBJECT

public:
	ChildDialog1(QWidget *parent = 0);
	~ChildDialog1();

private:
	Ui::ChildDialog1 ui;
};

#endif // CHILDDIALOG1_H
