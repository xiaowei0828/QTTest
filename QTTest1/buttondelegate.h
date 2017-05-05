#ifndef BUTTONDELEGATE_H
#define BUTTONDELEGATE_H

#include <QItemDelegate>
#include <QStyledItemDelegate>

class ButtonDelegate : public QStyledItemDelegate
{
	Q_OBJECT

public:
	ButtonDelegate(QObject *parent);
	~ButtonDelegate();

	void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex &index) const;
	bool editorEvent(QEvent *event, QAbstractItemModel *model,
		const QStyleOptionViewItem &option, const QModelIndex &index);

private:
	QMap<QModelIndex, QStyleOptionButton*> m_btns;
};

#endif // BUTTONDELEGATE_H
