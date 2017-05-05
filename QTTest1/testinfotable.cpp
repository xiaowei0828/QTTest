#include "testinfotable.h"
#include "testinfotableheader.h"
#include "testinfolistheader.h"
#include <QBoxLayout>

TestInfoTable::TestInfoTable(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QVBoxLayout* layout = new QVBoxLayout();

	TestInfoTableHeader* tableHeader = new TestInfoTableHeader();
	layout->addWidget(tableHeader);

	for (int i = 0; i < 10; i ++)
	{
		TestInfoListHeader* listHeader = new TestInfoListHeader();
		layout->addWidget(listHeader);
	}

	this->setLayout(layout);
}

TestInfoTable::~TestInfoTable()
{

}
