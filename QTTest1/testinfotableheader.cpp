#include "testinfotableheader.h"

TestInfoTableHeader::TestInfoTableHeader(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QPalette pal(this->palette());
	pal.setColor(QPalette::Background, QColor(QStringLiteral("#f1f1f1")));
	this->setAutoFillBackground(true);
	this->setPalette(pal);
}

TestInfoTableHeader::~TestInfoTableHeader()
{

}

void TestInfoTableHeader::SetInfo(const QString& testName, const QString& grade, 
	const QString& testType, const QString& time)
{
	ui.label->setText(testName);
	ui.label_2->setText(grade);
	ui.label_3->setText(testType);
	ui.label_4->setText(time);
	/*this->setFixedSize(QSize(1238, 48));*/
}
