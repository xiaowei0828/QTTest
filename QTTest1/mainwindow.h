#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QScopedPointer>
#include "ui_mainwindow.h"
#include "fixdialog.h"
#include "resizedialog.h"

class TableModel;
class ButtonDelegate;
class MainWindow : public resizeDialog
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

public Q_SLOTS:
	void PushButtonClicked();

protected:
	virtual void mousePressEvent(QMouseEvent *event) override;

private:
	Ui::MainWindow ui;
	TableModel* m_pModel;
	ButtonDelegate* m_pBtDelegate;
	QScopedPointer<QPushButton> m_pButton;
};

#endif // MAINWINDOW_H
