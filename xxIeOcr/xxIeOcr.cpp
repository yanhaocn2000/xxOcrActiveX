// xxIeOcr.cpp : CxxIeOcrApp �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "xxIeOcr.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CxxIeOcrApp theApp;

const GUID CDECL _tlid = { 0x8C9E3330, 0x6B81, 0x4E49, { 0xBA, 0xE8, 0xC6, 0xE0, 0x5B, 0x53, 0xC0, 0x32 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CxxIeOcrApp::InitInstance - DLL ��ʼ��

BOOL CxxIeOcrApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CxxIeOcrApp::ExitInstance - DLL ��ֹ

int CxxIeOcrApp::ExitInstance()
{
	// TODO: �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
