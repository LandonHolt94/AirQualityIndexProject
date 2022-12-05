#include <iostream>
#include "carbon.h"
#include "pm2.h"
#include "pm10.h"
#include "recommendation.h"
#include <Windows.h>
#include <string>
#include "StartMenu.h"
using namespace std;


int main()
{
	static CONSOLE_FONT_INFOEX  fontex;           // set font size
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(hOut, 0, &fontex);
	fontex.FontWeight = 700;
	fontex.dwFontSize.X = 36;
	fontex.dwFontSize.Y = 36;
	SetCurrentConsoleFontEx(hOut, NULL, &fontex);

	system("COLOR 3F");
	system("PAUSE");
	system("CLS");
	startMenu();
	//fileMenu();
	ifstream input;
	return 0;
}