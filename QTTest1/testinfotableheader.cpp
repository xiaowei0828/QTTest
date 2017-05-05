#include "testinfotableheader.h"

TestInfoTableHeader::TestInfoTableHeader(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

TestInfoTableHeader::~TestInfoTableHeader()
{

}

void TestInfoTableHeader::SetInfo(const QString& testName, const QString& grade, const QString& testType)
{
	ui.label->setText(testName);
	ui.label_2->setText(grade);
	ui.label_3->setText(testType);
}
