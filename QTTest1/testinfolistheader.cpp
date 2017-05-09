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

	ui.label->setText(QStringLiteral("�Ծ�����rewrwerw"));
	ui.label_2->setText(QStringLiteral("��Ŀ"));
	ui.label_3->setText(QStringLiteral("����ʱ��"));
	ui.label_4->setText(QStringLiteral("ѧ����"));
	ui.label_5->setText(QStringLiteral("״̬"));

	this->setFixedHeight(48);
}
