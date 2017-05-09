#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QScopedPointer>
#include "ui_mainwindow.h"
#include "fixdialog.h"
#include "resizedialog.h"

class TableModel;
class CustomTableItemDelegate;
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
	CustomTableItemDelegate* m_pBtDelegate;
};

#endif // MAINWINDOW_H
