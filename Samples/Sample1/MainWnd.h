#pragma once
#include "stdafx.h"
class CMainWnd : public CKuiDialogImpl<CMainWnd>
	, public CWHRoundRectFrameHelper<CMainWnd>
{
public:
	CMainWnd(void);
	virtual ~CMainWnd(void);
	void OnDestroy();

	void OnBkBtnClose();
    void OnBkBtnMax();
    void OnBkBtnMin();
	

	KUI_NOTIFY_MAP(IDC_RICHVIEW_WIN)
        KUI_NOTIFY_ID_COMMAND(60001, OnBkBtnClose)
        KUI_NOTIFY_ID_COMMAND(60002, OnBkBtnMax)
        KUI_NOTIFY_ID_COMMAND(60003, OnBkBtnMin)
        //KUI_NOTIFY_TAB_SELCHANGE(IDC_TAB_MAIN, OnBkTabMainSelChange)
    KUI_NOTIFY_MAP_END()

	BEGIN_MSG_MAP_EX(CMainWnd)
		MSG_KUI_NOTIFY(IDC_RICHVIEW_WIN)
		CHAIN_MSG_MAP(CKuiDialogImpl<CMainWnd>)
		CHAIN_MSG_MAP(CWHRoundRectFrameHelper<CMainWnd>)

		//MSG_WM_INITDIALOG(OnInitDialog)
		//MSG_WM_SYSCOMMAND(OnSysCommand)
		MSG_WM_DESTROY(OnDestroy)
		
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()
};
