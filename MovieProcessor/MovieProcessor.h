
// MovieProcessor.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CMovieProcessorApp:
// �� Ŭ������ ������ ���ؼ��� MovieProcessor.cpp�� �����Ͻʽÿ�.
//

class CMovieProcessorApp : public CWinApp
{
public:
	CMovieProcessorApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CMovieProcessorApp theApp;