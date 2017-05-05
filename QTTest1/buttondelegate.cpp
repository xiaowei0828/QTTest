#include "buttondelegate.h"
#include <QPainter>
#include <QApplication>
#include <QMouseEvent>

ButtonDelegate::ButtonDelegate(QObject *parent)
	: QStyledItemDelegate(parent)
{

}

ButtonDelegate::~ButtonDelegate()
{

}

void ButtonDelegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex &index) const
{
	QStyleOptionButton* button = m_btns.value(index);
	if (!button) {
		button = new QStyleOptionButton();
		button->rect = option.rect.adjusted(4, 4, -4, -4);
		button->text = "X";
		button->state |= QStyle::State_Enabled;

		(const_cast<ButtonDelegate *>(this))->m_btns.insert(index, button);
	}
	painter->save();

	if (option.state & QStyle::State_Selected) {
		painter->fillRect(option.rect, option.palette.highlight());

	}
	painter->restore();
	painter->setPen(QColor("#9b9b9b"));
	painter->drawLine(option.rect.bottomLeft(), option.rect.bottomRight());
	QApplication::style()->drawControl(QStyle::CE_PushButton, button, painter);
}

bool ButtonDelegate::editorEvent(QEvent *event, QAbstractItemModel *model, 
	const QStyleOptionViewItem &option, const QModelIndex &index)
{
	if (event->type() == QEvent::MouseButtonPress) {

		QMouseEvent* e = (QMouseEvent*)event;

		QVariant data = model->data(index);
		if (option.rect.adjusted(4, 4, -4, -4).contains(e->x(), e->y()) && m_btns.contains(index)) {
			m_btns.value(index)->state |= QStyle::State_Sunken;
		}
	}
	if (event->type() == QEvent::MouseButtonRelease) {
		QMouseEvent* e = (QMouseEvent*)event;

		if (option.rect.adjusted(4, 4, -4, -4).contains(e->x(), e->y()) && m_btns.contains(index)) {
			m_btns.value(index)->state &= (~QStyle::State_Sunken);
		}
	}
	return true;
}
