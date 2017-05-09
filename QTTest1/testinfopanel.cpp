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
	listNames << QStringLiteral("�Ծ�����") << QStringLiteral("��Ŀ") << QStringLiteral("����ʱ��")
		<< QStringLiteral("ѧ����") << QStringLiteral("״̬");
	
	QVBoxLayout* testInfoTable = new QVBoxLayout(ui.tableWidget);
	testInfoTable->setSpacing(0);
	testInfoTable->setMargin(1);

	TestInfoTableHeader* pTableHeader = new TestInfoTableHeader(this);
	pTableHeader->SetInfo(QStringLiteral("����������¿���"), QStringLiteral("�߶�"),
		QStringLiteral("�¿�"), QStringLiteral("2017-04-02 ��2017-05-02"));
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
