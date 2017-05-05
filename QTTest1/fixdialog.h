#ifndef FIXDIALOG_H
#define FIXDIALOG_H

#include <QDialog>

class FixDialog : public QDialog
{
	Q_OBJECT

public:
	FixDialog(QWidget *parent = 0);
	~FixDialog();

protected:
	virtual bool event(QEvent *event) override;
	virtual void mousePressEvent(QMouseEvent *evt) override;
	virtual void mouseReleaseEvent(QMouseEvent *evt) override;
	virtual void mouseMoveEvent(QMouseEvent *evt) override;
	QPoint move_point;
	bool mouse_press = false;

private:
	
};

#endif // FIXDIALOG_H
