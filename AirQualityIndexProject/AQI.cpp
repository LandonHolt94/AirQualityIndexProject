#include <iostream>
#include "carbon.h"
#include "pm2.h"
#include "pm10.h"
#include "recommendation.h"
#include "MainMenu.h"
#include "fileMenu.h"
#include <Windows.h>
#include <string>

using namespace std;

void startMenu()
{
	int select;
	cout << "\t\t ************* CLIMATE CONTROL ************\n\n";
	string k = "\t\t\t What Is Air Pollution?\n\n";
	string a = "\t Air pollution is contamination of the indoor or outdoor environment by any chemical, physical\n\t or biological agent that modifies the natural characteristics of the atmosphere.\n\t Household combustion devices, motor vehicles, industrial facilities\n\t and forest fires are common sources of air pollution.\n\n ";
	string c = "\t\t Here's a select list of cities that surround us.\n\tEnter the city name to see the air quality.\n\t 1.Yucaipa \n\t 2. Mentone \n\t 3. Banning \n\t 4. Beaumont\n\t 5. Redlands\n\t 6. Calimesa\n\t 7. Highland\n\t";
	static CONSOLE_FONT_INFOEX  fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(hOut, 0, &fontex);
	fontex.FontWeight = 700;
	fontex.dwFontSize.X = 36;
	fontex.dwFontSize.Y = 36;
	SetCurrentConsoleFontEx(hOut, NULL, &fontex);


	for (int i = 0; i < k.length(); ++i) {
		cout << k.at(i);
		Sleep(50);
	}
	Sleep(2000);
	cout << endl;

	for (int t = 0; t < a.length(); ++t) {
		cout << a.at(t);
		Sleep(20);
	}
	cout << endl;
	for (int b = 0; b < c.length(); ++b) {
		cout << c.at(b);
		Sleep(20);
	}

	system("PAUSE");
	system("CLS");

}




int main()
{

	system("COLOR 3F");
	system("PAUSE");
	system("CLS");

	//startMenu();

	startMenu();
	fileMenu();
	MainMenu();
	ifstream input;
	return 0;
}