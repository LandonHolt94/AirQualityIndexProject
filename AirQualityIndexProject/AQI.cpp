#include <iostream>
#include "carbon.h"
#include "pm2.h"
#include "pm10.h"
#include "recommendation.h"
#include "MainMenu.h"
#include <Windows.h>
#include <string>
using namespace std;

void startMenu()
{
	int select = 1;

	string a = "\t\t\t What Is Air Pollution?\n\n";
	string ab = "\t Air pollution is contamination of the indoor or outdoor environment by any chemical, physical\n\t or biological agent that modifies the natural characteristics of the atmosphere.\n\t Household combustion devices, motor vehicles, industrial facilities\n\t and forest fires are common sources of air pollution.\n\n ";
	string b = "\t\t\t What Is An Air Quality Index(AQI)?\n\n";
	string ba = "\t The AQI is an index for reporting daily air quality. It tells you how clean or unhealthy your air is, and\n\t what associ- ated health effects might be a concern.The AQI focuses on health effects\n\t you may experience within a few hours or days after breathing unhealthy air.\n\n";
	
	
	
	
	system("CLS");
	while (select != 0) {
		cout << "\t\t ************* Climate Control ************\n\n";
		cout << "\t\t 1. Learn More About Air Pollution\n\t\t 2. Learn More about Air Quality Index\n\t\t 3. Calculate AQI\n\t\t";
		cout << " Choose an option: ";
		cin >> select;
		system("CLS");

		switch (select) {
		case 1:
			cout << "\t\t ************* Climate Control ************\n\n"; // option 1: gives info on air pollution
			for (int i = 0; i < a.length(); ++i) {
				cout << a.at(i);
				Sleep(50);
			}
			Sleep(2000);
			cout << endl;

			for (int t = 0; t < ab.length(); ++t) {
				cout << ab.at(t);
				Sleep(20);
			}
			break;

		case 2:
			cout <<	"\t\t ************* Climate Control ************\n\n"; // option 2: gives info on AQI
			for (int f = 0; f < b.length(); ++f) {
				cout << b.at(f);
				Sleep(50);
			}
			Sleep(2000);
			cout << endl;

			for (int b = 0; b < ba.length(); ++b) {
				cout << ba.at(b);
				Sleep(20);
			}
			break;
		case 3:
			cout << "\t\t ************* Climate Control ************\n\n"; // option 3: Calculates AQI
			MainMenu();
			select = 0;
			break;
		}
	}
}






int main()
{
	system("COLOR 3F"); // set color of background 
	system("PAUSE");
	system("CLS");

	static CONSOLE_FONT_INFOEX  fontex;           // set font size
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(hOut, 0, &fontex);
	fontex.FontWeight = 700;
	fontex.dwFontSize.X = 36;
	fontex.dwFontSize.Y = 36;
	SetCurrentConsoleFontEx(hOut, NULL, &fontex); 

	startMenu();    
	system("CLS");
	MainMenu();
	return 0;
}