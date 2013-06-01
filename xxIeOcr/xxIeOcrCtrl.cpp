// xxIeOcrCtrl.cpp : CxxIeOcrCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "xxIeOcr.h"
#include "xxIeOcrCtrl.h"
#include "xxIeOcrPropPage.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CxxIeOcrCtrl, COleControl)



// 消息映射

BEGIN_MESSAGE_MAP(CxxIeOcrCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// 调度映射

BEGIN_DISPATCH_MAP(CxxIeOcrCtrl, COleControl)
	DISP_FUNCTION_ID(CxxIeOcrCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()



// 事件映射

BEGIN_EVENT_MAP(CxxIeOcrCtrl, COleControl)
END_EVENT_MAP()



// 属性页

// TODO: 按需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CxxIeOcrCtrl, 1)
	PROPPAGEID(CxxIeOcrPropPage::guid)
END_PROPPAGEIDS(CxxIeOcrCtrl)



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CxxIeOcrCtrl, "XXIEOCR.xxIeOcrCtrl.1",
	0x32b6c7b0, 0x80c4, 0x4797, 0x9f, 0xa7, 0xa2, 0x42, 0x36, 0xc1, 0xb0, 0xab)



// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CxxIeOcrCtrl, _tlid, _wVerMajor, _wVerMinor)



// 接口 ID

const IID IID_DxxIeOcr = { 0x7EAAAC8B, 0x2B3B, 0x4DC5, { 0xA8, 0xDD, 0xCB, 0x45, 0x11, 0x72, 0x1F, 0xF3 } };
const IID IID_DxxIeOcrEvents = { 0x1750CCDE, 0x572C, 0x440B, { 0x83, 0xAF, 0xD6, 0xB, 0x85, 0xBA, 0xB4, 0xBF } };


// 控件类型信息

static const DWORD _dwxxIeOcrOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CxxIeOcrCtrl, IDS_XXIEOCR, _dwxxIeOcrOleMisc)



// CxxIeOcrCtrl::CxxIeOcrCtrlFactory::UpdateRegistry -
// 添加或移除 CxxIeOcrCtrl 的系统注册表项

BOOL CxxIeOcrCtrl::CxxIeOcrCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

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



// CxxIeOcrCtrl::CxxIeOcrCtrl - 构造函数

CxxIeOcrCtrl::CxxIeOcrCtrl()
{
	InitializeIIDs(&IID_DxxIeOcr, &IID_DxxIeOcrEvents);
	// TODO: 在此初始化控件的实例数据。
}



// CxxIeOcrCtrl::~CxxIeOcrCtrl - 析构函数

CxxIeOcrCtrl::~CxxIeOcrCtrl()
{
	// TODO: 在此清理控件的实例数据。
}



// CxxIeOcrCtrl::OnDraw - 绘图函数

void CxxIeOcrCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: 用您自己的绘图代码替换下面的代码。
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CxxIeOcrCtrl::DoPropExchange - 持久性支持

void CxxIeOcrCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}



// CxxIeOcrCtrl::OnResetState - 将控件重置为默认状态

void CxxIeOcrCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO: 在此重置任意其他控件状态。
}



// CxxIeOcrCtrl::AboutBox - 向用户显示“关于”框

void CxxIeOcrCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_XXIEOCR);
	dlgAbout.DoModal();
}



// CxxIeOcrCtrl 消息处理程序
