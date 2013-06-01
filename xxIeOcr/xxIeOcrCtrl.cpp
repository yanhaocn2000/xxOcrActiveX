// xxIeOcrCtrl.cpp : CxxIeOcrCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "xxIeOcr.h"
#include "xxIeOcrCtrl.h"
#include "xxIeOcrPropPage.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CxxIeOcrCtrl, COleControl)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CxxIeOcrCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// ����ӳ��

BEGIN_DISPATCH_MAP(CxxIeOcrCtrl, COleControl)
	DISP_FUNCTION_ID(CxxIeOcrCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()



// �¼�ӳ��

BEGIN_EVENT_MAP(CxxIeOcrCtrl, COleControl)
END_EVENT_MAP()



// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CxxIeOcrCtrl, 1)
	PROPPAGEID(CxxIeOcrPropPage::guid)
END_PROPPAGEIDS(CxxIeOcrCtrl)



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CxxIeOcrCtrl, "XXIEOCR.xxIeOcrCtrl.1",
	0x32b6c7b0, 0x80c4, 0x4797, 0x9f, 0xa7, 0xa2, 0x42, 0x36, 0xc1, 0xb0, 0xab)



// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CxxIeOcrCtrl, _tlid, _wVerMajor, _wVerMinor)



// �ӿ� ID

const IID IID_DxxIeOcr = { 0x7EAAAC8B, 0x2B3B, 0x4DC5, { 0xA8, 0xDD, 0xCB, 0x45, 0x11, 0x72, 0x1F, 0xF3 } };
const IID IID_DxxIeOcrEvents = { 0x1750CCDE, 0x572C, 0x440B, { 0x83, 0xAF, 0xD6, 0xB, 0x85, 0xBA, 0xB4, 0xBF } };


// �ؼ�������Ϣ

static const DWORD _dwxxIeOcrOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CxxIeOcrCtrl, IDS_XXIEOCR, _dwxxIeOcrOleMisc)



// CxxIeOcrCtrl::CxxIeOcrCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CxxIeOcrCtrl ��ϵͳע�����

BOOL CxxIeOcrCtrl::CxxIeOcrCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_XXIEOCR,
			IDB_XXIEOCR,
			afxRegApartmentThreading,
			_dwxxIeOcrOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CxxIeOcrCtrl::CxxIeOcrCtrl - ���캯��

CxxIeOcrCtrl::CxxIeOcrCtrl()
{
	InitializeIIDs(&IID_DxxIeOcr, &IID_DxxIeOcrEvents);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}



// CxxIeOcrCtrl::~CxxIeOcrCtrl - ��������

CxxIeOcrCtrl::~CxxIeOcrCtrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
}



// CxxIeOcrCtrl::OnDraw - ��ͼ����

void CxxIeOcrCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CxxIeOcrCtrl::DoPropExchange - �־���֧��

void CxxIeOcrCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}



// CxxIeOcrCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CxxIeOcrCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}



// CxxIeOcrCtrl::AboutBox - ���û���ʾ�����ڡ���

void CxxIeOcrCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_XXIEOCR);
	dlgAbout.DoModal();
}



// CxxIeOcrCtrl ��Ϣ�������
