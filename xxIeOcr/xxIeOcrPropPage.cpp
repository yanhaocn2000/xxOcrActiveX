// xxIeOcrPropPage.cpp : CxxIeOcrPropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "xxIeOcr.h"
#include "xxIeOcrPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CxxIeOcrPropPage, COlePropertyPage)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CxxIeOcrPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CxxIeOcrPropPage, "XXIEOCR.xxIeOcrPropPage.1",
	0x767b9628, 0x99ec, 0x4990, 0xa2, 0xb5, 0, 0, 0x9c, 0xdc, 0x84, 0xee)



// CxxIeOcrPropPage::CxxIeOcrPropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CxxIeOcrPropPage ��ϵͳע�����

BOOL CxxIeOcrPropPage::CxxIeOcrPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_XXIEOCR_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CxxIeOcrPropPage::CxxIeOcrPropPage - ���캯��

CxxIeOcrPropPage::CxxIeOcrPropPage() :
	COlePropertyPage(IDD, IDS_XXIEOCR_PPG_CAPTION)
{
}



// CxxIeOcrPropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CxxIeOcrPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CxxIeOcrPropPage ��Ϣ�������
