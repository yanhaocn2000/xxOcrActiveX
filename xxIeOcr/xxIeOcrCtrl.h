#pragma once

// xxIeOcrCtrl.h : CxxIeOcrCtrl ActiveX �ؼ����������


// CxxIeOcrCtrl : �й�ʵ�ֵ���Ϣ������� xxIeOcrCtrl.cpp��

class CxxIeOcrCtrl : public COleControl
{
	DECLARE_DYNCREATE(CxxIeOcrCtrl)

// ���캯��
public:
	CxxIeOcrCtrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CxxIeOcrCtrl();

	DECLARE_OLECREATE_EX(CxxIeOcrCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CxxIeOcrCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CxxIeOcrCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CxxIeOcrCtrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
	};
};

