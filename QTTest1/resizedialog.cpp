#include "resizedialog.h"
#include "qt_windows.h"
#include "qevent.h"
#include <QBitmap>
#include <QPainter>
#include <QBrush>

#define BORDER_WIDTH   (4)
resizeDialog::resizeDialog(QWidget *parent)
	: QDialog(parent)
{
	setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowMinMaxButtonsHint);
	this->setSizeGripEnabled(true);

}

resizeDialog::~resizeDialog()
{

}

void resizeDialog::roundWindow()
{
	QBitmap bmp(this->size());
	bmp.fill();
	QPainter p(&bmp);
	p.setRenderHint(QPainter::Antialiasing);
	//p.drawRoundedRect(bmp.rect(), 20, 20); //四个角都是圆弧  
	//只要上边角圆弧  
	int arcR = 4;
	QRect rect = this->rect();
	QPainterPath path;
	//逆时针  
	path.moveTo(arcR, 0);
	path.arcTo(0, 0, arcR * 2, arcR * 2, 90.0f, 90.0f);
	path.lineTo(0, rect.height());
	path.lineTo(rect.width(), rect.height());
	path.lineTo(rect.width(), arcR);
	path.arcTo(rect.width() - arcR * 2, 0, arcR * 2, arcR * 2, 0.0f, 90.0f);
	path.lineTo(arcR, 0);
	p.drawPath(path);
	p.fillPath(path, QBrush(RGB(255, 0, 0)));
	setMask(bmp);
}
void resizeDialog::resizeEvent(QResizeEvent *event)
{
	__super::resizeEvent(event);
	roundWindow();
}
void resizeDialog::setFixedSize(int w, int h)
{
	setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
	this->setSizeGripEnabled(false);
	__super::setFixedSize(w, h);
	roundWindow();
}
bool resizeDialog::event(QEvent *event)
{
	static bool class_amended = false;
	if (event->type() == QEvent::WinIdChange)
	{
		HWND hwnd = reinterpret_cast<HWND>(winId());
		if (class_amended == false)
		{
			class_amended = true;
			DWORD class_style = ::GetClassLong(hwnd, GCL_STYLE);
			class_style |= CS_DROPSHADOW;
			::SetClassLong(hwnd, GCL_STYLE, class_style);
		}
	}
	return __super::event(event);
}

void resizeDialog::mousePressEvent(QMouseEvent *event)
{
	//只能是鼠标左键移动和改变大小
	if (event->button() == Qt::LeftButton)
	{
		mouse_press = true;
	}

	//窗口移动距离
	move_point = event->globalPos() - pos();
}

void resizeDialog::mouseReleaseEvent(QMouseEvent *)
{
	mouse_press = false;
}

void resizeDialog::mouseMoveEvent(QMouseEvent *event)
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
bool resizeDialog::nativeEvent(const QByteArray & eventType, void * message, long * result)
{
	const MSG *msg = static_cast<MSG*>(message);
	if (msg->message == WM_NCHITTEST)
	{
		QRect &frameGeo = this->frameGeometry();
		int xPos = ((int)(short)LOWORD(msg->lParam)) - frameGeo.x();
		int yPos = ((int)(short)HIWORD(msg->lParam)) - frameGeo.y();

		if (this->isMaximized() || (this->windowFlags() & Qt::WindowMaximizeButtonHint) == 0)
		{
			return false;
		}
		else
		{
			if (xPos <= BORDER_WIDTH && yPos <= BORDER_WIDTH)
			{
				*result = HTTOPLEFT;
				return true;
			}
			else if (xPos <= BORDER_WIDTH && yPos >= frameGeo.height() - BORDER_WIDTH)
			{
				*result = HTBOTTOMLEFT;
				return true;
			}
			else if (xPos >= frameGeo.width() - BORDER_WIDTH && yPos <= BORDER_WIDTH)
			{
				*result = HTTOPRIGHT;
				return true;
			}
			else if (xPos >= frameGeo.width() - BORDER_WIDTH && yPos >= frameGeo.height() - BORDER_WIDTH)
			{
				*result = HTBOTTOMRIGHT;
				return true;
			}
			else if (xPos <= BORDER_WIDTH)
			{
				*result = HTLEFT;
				return true;
			}
			else if (yPos <= BORDER_WIDTH)
			{
				*result = HTTOP;
				return true;
			}
			else if (xPos >= frameGeo.width() - BORDER_WIDTH)
			{
				*result = HTRIGHT;
				return true;
			}
			else if (yPos >= frameGeo.height() - BORDER_WIDTH)
			{
				*result = HTBOTTOM;
				return true;
			}
		}
	}
	else if (msg->message == WM_COPYDATA)
	{
		if (COPYDATASTRUCT *data = (COPYDATASTRUCT *)msg->lParam)
		{
			if (data->cbData > 0 && strncmp((char*)data->lpData, "show", data->cbData) == 0)
			{
				processCopyDataMessage();
			}
		}
	}
	return false;
}
