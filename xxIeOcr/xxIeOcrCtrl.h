#pragma once

// xxIeOcrCtrl.h : CxxIeOcrCtrl ActiveX 控件类的声明。


// CxxIeOcrCtrl : 有关实现的信息，请参阅 xxIeOcrCtrl.cpp。

class CxxIeOcrCtrl : public COleControl
{
	DECLARE_DYNCREATE(CxxIeOcrCtrl)

// 构造函数
public:
	CxxIeOcrCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CxxIeOcrCtrl();

	DECLARE_OLECREATE_EX(CxxIeOcrCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CxxIeOcrCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CxxIeOcrCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CxxIeOcrCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
	};
};

