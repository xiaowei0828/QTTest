#include "testinfopanel.h"
#include <QListWidget>
#include "testinfotableheader.h"
#include "testinfolistheader.h"
#include <QLayout>
#include "testinfoitem.h"

TestInfoPanel::TestInfoPanel(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QPalette pal(this->palette());

	pal.setColor(QPalette::Background, Qt::white);
	this->setAutoFillBackground(true);
	this->setPalette(pal);

	QStringList listNames;
	listNames << QStringLiteral("试卷名称") << QStringLiteral("科目") << QStringLiteral("考试时间")
		<< QStringLiteral("学生数") << QStringLiteral("状态");
	
	QVBoxLayout* testInfoTable = new QVBoxLayout(ui.tableWidget);
	testInfoTable->setSpacing(0);
	testInfoTable->setMargin(1);

	TestInfoTableHeader* pTableHeader = new TestInfoTableHeader(this);
	pTableHeader->SetInfo(QStringLiteral("阜阳红旗二月考试"), QStringLiteral("高二"),
		QStringLiteral("月考"), QStringLiteral("2017-04-02 至2017-05-02"));
	testInfoTable->addWidget(pTableHeader);

	TestInfoListHeader* pListHeader = new TestInfoListHeader(this);
	testInfoTable->addWidget(pListHeader);

	for (int i = 0; i < 20; ++i)
	{
		TestInfoItem* pListItem = new TestInfoItem(this);
		testInfoTable->addWidget(pListItem);
	}
	testInfoTable->addStretch(0);
}

TestInfoPanel::~TestInfoPanel()
{

}
