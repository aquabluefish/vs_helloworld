// HelloWorld.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//


#include "stdafx.h"
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	MessageBox(NULL, "Hello World!", "Message", 0);

	return 0;
}
