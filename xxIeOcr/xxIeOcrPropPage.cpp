// xxIeOcrPropPage.cpp : CxxIeOcrPropPage 属性页类的实现。

#include "stdafx.h"
#include "xxIeOcr.h"
#include "xxIeOcrPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CxxIeOcrPropPage, COlePropertyPage)



// 消息映射

BEGIN_MESSAGE_MAP(CxxIeOcrPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CxxIeOcrPropPage, "XXIEOCR.xxIeOcrPropPage.1",
	0x767b9628, 0x99ec, 0x4990, 0xa2, 0xb5, 0, 0, 0x9c, 0xdc, 0x84, 0xee)



// CxxIeOcrPropPage::CxxIeOcrPropPageFactory::UpdateRegistry -
// 添加或移除 CxxIeOcrPropPage 的系统注册表项

BOOL CxxIeOcrPropPage::CxxIeOcrPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_XXIEOCR_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CxxIeOcrPropPage::CxxIeOcrPropPage - 构造函数

CxxIeOcrPropPage::CxxIeOcrPropPage() :
	COlePropertyPage(IDD, IDS_XXIEOCR_PPG_CAPTION)
{
}



// CxxIeOcrPropPage::DoDataExchange - 在页和属性间移动数据

void CxxIeOcrPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CxxIeOcrPropPage 消息处理程序
