#include "testinfolistheader.h"

TestInfoListHeader::TestInfoListHeader(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

TestInfoListHeader::~TestInfoListHeader()
{

}

void TestInfoListHeader::SetInfo(const QString& paperName, const QString& subject, const QString& time)
{
	ui.label->setText(paperName);
	ui.label_2->setText(subject);
	ui.label_3->setText(time);
}
