#ifndef BUTTONDELEGATE_H
#define BUTTONDELEGATE_H

#include <QItemDelegate>
#include <QStyledItemDelegate>
#include <QPushButton>

class CustomTableItemDelegate : public QStyledItemDelegate
{
	Q_OBJECT

public:
	CustomTableItemDelegate(QObject *parent);
	~CustomTableItemDelegate();

	void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex &index) const;
	bool editorEvent(QEvent *event, QAbstractItemModel *model,
		const QStyleOptionViewItem &option, const QModelIndex &index);

private:
	//QMap<QModelIndex, QStyleOptionButton*> m_btns;
	QScopedPointer<QPushButton> m_pCustomBt;
};

#endif // BUTTONDELEGATE_H
