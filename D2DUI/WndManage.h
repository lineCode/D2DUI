#pragma once

/*******************************************
	���ڹ�����Ϣ����
*******************************************/
extern LPCTSTR g_sD2DUIWNDName;

class CWndBase;
class CWndManage
{
public:
	static CWndManage& GetInstance() {
		static CWndManage instance;
		return instance;
	}

	CWndManage();
	~CWndManage();

	HWND CreateWnd();
	int  MsgLoop();

	void DoPaint(HWND);
	void MsgProc(HWND, UINT, WPARAM, LPARAM);	

private:
	std::map<HWND, CWndBase*> m_nWndCenter;
};