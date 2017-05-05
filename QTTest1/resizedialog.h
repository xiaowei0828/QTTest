#ifndef RESIZEDIALOG_H
#define RESIZEDIALOG_H

#include <QDialog>

class resizeDialog : public QDialog
{
	Q_OBJECT

public:
	resizeDialog(QWidget *parent = 0);
	virtual ~resizeDialog();
	void setFixedSize(int w, int h);
	void roundWindow();

	virtual bool nativeEvent(const QByteArray & eventType, void * message, long * result) override;
	virtual bool event(QEvent *event) override;
	virtual void mousePressEvent(QMouseEvent *evt) override;
	virtual void mouseReleaseEvent(QMouseEvent *evt) override;
	virtual void mouseMoveEvent(QMouseEvent *evt) override;
	virtual void resizeEvent(QResizeEvent *event) override;
	virtual void processCopyDataMessage() {};
	QPoint move_point;
	bool mouse_press = false;
private:
};

#endif // RESIZEDIALOG_H
