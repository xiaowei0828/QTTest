#include "mainwindow.h"
#include "testinfotable.h"
#include "QVBoxLayout"
#include "testinfotableheader.h"
#include <QStandardItem>
#include "tablemodel.h"
#include "customtableitemdelegate.h"
#include <QListWidget>
#include "testinfolistheader.h"
#include "testinfopanel.h"
#include <QScrollBar>
#include <QApplication>
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent)
	: resizeDialog(parent)
{
	ui.setupUi(this);

	const QRect& screenRect =  QApplication::desktop()->screenGeometry();
	
	QSize windowSize = QSize(screenRect.width() * 2 / 3, screenRect.height() * 2 / 3);
	this->resize(windowSize);

	ui.labelWindowTitle->setText(QStringLiteral("扫描系统-阜阳红旗中学"));
	ui.btUploadTemplate->setText(QStringLiteral("上传试卷模板"));
	ui.btUploadPaper->setText(QStringLiteral("上传学生答卷"));
	ui.btUploadComplete->setText(QStringLiteral("已完成"));

	TestInfoPanel* pTestInfoPanel = new TestInfoPanel(ui.scrollArea);
	ui.scrollArea->setWidget(pTestInfoPanel);
	
	/*m_pModel = new TableModel(ui.tableView);

	m_pBtDelegate = new CustomTableItemDelegate(ui.tableView);

	QStringList headers;
	headers << "Id" << "Progress";
	m_pModel->setHorizontalHeader(headers);

	QVector<QStringList> data;
	data.append(QStringList() << QStringLiteral("阜阳红旗高二数学试卷") << QStringLiteral("上传"));
	data.append(QStringList() << QStringLiteral("阜阳红旗高二物理试卷") << QStringLiteral("上传"));
	data.append(QStringList() << QStringLiteral("阜阳红旗高二化学试卷") << QStringLiteral("上传"));
	m_pModel->setData(data);

	ui.tableView->horizontalHeader()->setFixedHeight(50);
	ui.tableView->horizontalHeader()->setSectionsClickable(false);
	ui.tableView->setShowGrid(false);
	ui.tableView->verticalHeader()->hide();
	ui.tableView->setItemDelegateForColumn(1, m_pBtDelegate);
	ui.tableView->setModel(m_pModel);

	ui.tableView->horizontalHeader()->resizeSection(0, 280);

	emit m_pModel->layoutChanged();*/
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
