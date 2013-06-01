#pragma once

// xxIeOcrPropPage.h : CxxIeOcrPropPage 属性页类的声明。


// CxxIeOcrPropPage : 有关实现的信息，请参阅 xxIeOcrPropPage.cpp。

class CxxIeOcrPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CxxIeOcrPropPage)
	DECLARE_OLECREATE_EX(CxxIeOcrPropPage)

// 构造函数
public:
	CxxIeOcrPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_XXIEOCR };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

