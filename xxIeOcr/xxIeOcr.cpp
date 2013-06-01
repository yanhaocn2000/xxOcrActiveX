// xxIeOcr.cpp : CxxIeOcrApp 和 DLL 注册的实现。

#include "stdafx.h"
#include "xxIeOcr.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CxxIeOcrApp theApp;

const GUID CDECL _tlid = { 0x8C9E3330, 0x6B81, 0x4E49, { 0xBA, 0xE8, 0xC6, 0xE0, 0x5B, 0x53, 0xC0, 0x32 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CxxIeOcrApp::InitInstance - DLL 初始化

BOOL CxxIeOcrApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: 在此添加您自己的模块初始化代码。
	}

	return bInit;
}



// CxxIeOcrApp::ExitInstance - DLL 终止

int CxxIeOcrApp::ExitInstance()
{
	// TODO: 在此添加您自己的模块终止代码。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
