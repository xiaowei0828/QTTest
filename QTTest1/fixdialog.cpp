#include "fixdialog.h"
#include <qwindow.h>
#include "qevent.h"

FixDialog::FixDialog(QWidget *parent)
	: QDialog(parent)
{
	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
	//this->setAttribute(Qt::WA_TranslucentBackground);
}

FixDialog::~FixDialog()
{

}


bool FixDialog::event(QEvent *event)
{
	//static bool class_amended = false;
	//if (event->type() == QEvent::WinIdChange)
	//{
	//	HWND hwnd = reinterpret_cast<HWND>(winId());
	//	if (class_amended == false)
	//	{
	//		class_amended = true;
	//		DWORD class_style = ::GetClassLong(hwnd, GCL_STYLE);
	//		class_style |= CS_DROPSHADOW;
	//		::SetClassLong(hwnd, GCL_STYLE, class_style);
	//	}
	//}
	return __super::event(event);
}

void FixDialog::mousePressEvent(QMouseEvent *event)
{
	//只能是鼠标左键移动和改变大小
	if (event->button() == Qt::LeftButton)
	{
		mouse_press = true;
	}

	//窗口移动距离
	move_point = event->globalPos() - pos();
}

void FixDialog::mouseReleaseEvent(QMouseEvent *)
{
	mouse_press = false;
}

void FixDialog::mouseMoveEvent(QMouseEvent *event)
{
	//移动窗口
	if (mouse_press)
	{
		if (!this->isMaximized())
		{
			QPoint move_pos = event->globalPos();
			move(move_pos - move_point);
		}

	}
}