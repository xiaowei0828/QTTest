#include "testinfoitem.h"
#include <QPen>
#include <QPainter>
#include <QPaintEvent>

TestInfoItem::TestInfoItem(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

TestInfoItem::~TestInfoItem()
{

}

void TestInfoItem::Init()
{
	QPalette pal(this->palette());
	pal.setColor(QPalette::Background, Qt::white);
	this->setAutoFillBackground(true);
	this->setPalette(pal);

	/*this->setContentsMargins(0, 5, 0, 5);*/
	ui.label->setText(QStringLiteral("阜阳红旗高二数学试卷"));
	ui.label_2->setText(QStringLiteral("高等数学"));
	ui.label_3->setText(QStringLiteral("02-13 9:00-11:00"));
	ui.label_4->setText(QStringLiteral("55"));
	ui.label_5->setText(QStringLiteral("已分配"));

	this->setFixedHeight(48);
}

void TestInfoItem::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	QPen pen(QColor(QStringLiteral("#979797")));
	painter.setPen(pen);
	painter.drawLine(this->rect().topLeft() + QPoint(25, 0),
		this->rect().topRight() - QPoint(25, 0));
}
