#pragma once

// xxIeOcr.h : xxIeOcr.DLL ����ͷ�ļ�

#if !defined( __AFXCTL_H__ )
#error "�ڰ������ļ�֮ǰ������afxctl.h��"
#endif

#include "resource.h"       // ������


// CxxIeOcrApp : �й�ʵ�ֵ���Ϣ������� xxIeOcr.cpp��

class CxxIeOcrApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

