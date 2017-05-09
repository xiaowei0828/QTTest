#include "testinfolistheader.h"
#include <QLayout>
#include <QLabel>

TestInfoListHeader::TestInfoListHeader(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

TestInfoListHeader::~TestInfoListHeader()
{

}

void TestInfoListHeader::Init()
{
	QPalette pal(this->palette());
	pal.setColor(QPalette::Background, Qt::white);
	this->setAutoFillBackground(true);
	this->setPalette(pal);

	ui.label->setText(QStringLiteral("试卷名称rewrwerw"));
	ui.label_2->setText(QStringLiteral("科目"));
	ui.label_3->setText(QStringLiteral("考试时间"));
	ui.label_4->setText(QStringLiteral("学生数"));
	ui.label_5->setText(QStringLiteral("状态"));

	this->setFixedHeight(48);
}
