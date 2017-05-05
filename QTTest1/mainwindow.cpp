#include "mainwindow.h"
#include "testinfotable.h"
#include "QVBoxLayout"
#include "testinfotableheader.h"
#include <QStandardItem>
#include "tablemodel.h"
#include "buttondelegate.h"

MainWindow::MainWindow(QWidget *parent)
	: resizeDialog(parent),
	m_pButton(new QPushButton)
{
	ui.setupUi(this);

	m_pButton->setStyleSheet("QPushButton {border: none; background-color: transparent; font:solid blue 14px;}");
	m_pButton->setText(QStringLiteral("≤‚ ‘"));

	connect(ui.pushButton, &QPushButton::clicked, this, &MainWindow::PushButtonClicked);

	m_pModel = new TableModel(ui.tableView);
	
	m_pBtDelegate = new ButtonDelegate(ui.tableView);

	QStringList headers;
	headers << "Id" << "Progress";
	m_pModel->setHorizontalHeader(headers);

	QVector<QStringList> data;
	data.append(QStringList() << "1" << "11");
	data.append(QStringList() << "2" << "22");
	data.append(QStringList() << "3" << "33");
	m_pModel->setData(data);
	
	ui.tableView->horizontalHeader()->setSectionsClickable(false);
	ui.tableView->setShowGrid(false);
	ui.tableView->verticalHeader()->hide();
	ui.tableView->setItemDelegateForColumn(1, m_pBtDelegate);
	ui.tableView->setModel(m_pModel);

	emit m_pModel->layoutChanged();
}

MainWindow::~MainWindow()
{

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
	setFocus();
	return resizeDialog::mousePressEvent(event);
}

void MainWindow::PushButtonClicked()
{
	QVector<QStringList>& data = m_pModel->DataVector();
	data.removeFirst();
	emit m_pModel->layoutChanged();
}
