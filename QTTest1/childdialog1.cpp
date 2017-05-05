#include "childdialog1.h"

ChildDialog1::ChildDialog1(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
}

ChildDialog1::~ChildDialog1()
{

}
