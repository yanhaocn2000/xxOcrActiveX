#pragma once

// xxIeOcrPropPage.h : CxxIeOcrPropPage ����ҳ���������


// CxxIeOcrPropPage : �й�ʵ�ֵ���Ϣ������� xxIeOcrPropPage.cpp��

class CxxIeOcrPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CxxIeOcrPropPage)
	DECLARE_OLECREATE_EX(CxxIeOcrPropPage)

// ���캯��
public:
	CxxIeOcrPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_XXIEOCR };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

