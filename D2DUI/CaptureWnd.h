#pragma once
#include "WndBase.h"
#include "D2DButton.h"
/*******************************************
	¼������ѡ�񴰿�
*******************************************/

class CCaptureWnd : public CWndBase
{
public:
	CCaptureWnd();
	virtual ~CCaptureWnd();

	virtual HWND	CreateWnd(int, int, HWND);
	virtual void	DoDraw();
	virtual void	Redraw();
	virtual void	MsgProc(HWND, UINT, WPARAM, LPARAM);

private:
	CD2DButton	m_nCloseBtn;
};

