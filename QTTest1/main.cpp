
#include <QtWidgets/QApplication>
#include <QFontDatabase>
#include <qlogging.h>
#include <QFile>
#include "mainwindow.h"

void customMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
	QString msg1 = msg;
}
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//qInstallMessageHandler(customMessageHandler);
	int loadedFontID = QFontDatabase::addApplicationFont(QStringLiteral("Resources\\PingFang Regular.ttf"));
	if (loadedFontID == -1)
	{
		qCritical("load font file failed");
		return -1;
	}

	QStringList loadedFontFamilies = QFontDatabase::applicationFontFamilies(loadedFontID);

	QFile cssFile(QStringLiteral(":/QTTest1/Resources/skin.css"));
	if (cssFile.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QByteArray css = cssFile.readAll();
		QString strCss = QString::fromUtf8(css);
		a.setStyleSheet(strCss);
	}
	MainWindow w;
	w.show();
	return a.exec();
}
