#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include "MainMenu.h"
#include "fileMenu.h"
using namespace std;


void startMenu()
{
	int select = 1;


	string a = "\n\n\t\t\t What Is Air Pollution?\n\n";
	string ab = "\t Air pollution is contamination of the indoor or outdoor environment by any chemical,\n\t physical or biological agent that modifies the natural characteristics of the atmosphere.\n";
	string abc = "\t\t - Mobile sources such as cars,buses,planes,trucks and trains.\n\t\t - Stationary sources such as power plants, oil refineries, and factories\n\t\t - Area sources such as agricultural areas,cities, and wood burning fireplaces\n\n";
	string b = "\n\n\t\t\t What Is An Air Quality Index(AQI)?\n\n";
	string ba = "\t The AQI is an index for reporting daily air quality.It tells you how\n\t clean or unhealthy your air is, and what associated health effects might be\n\t a concern.The AQI focuses on health effects you may experience within a few\n\t hours or days after breathing unhealthy air.\n\n";


	while (select != 0) {
		cout << "\t\t ************* Climate Control ************\n\n";
		cout << "\t\t 1. Learn More About Air Pollution\n\t\t 2. Learn More about Air Quality Index\n\t\t 3. Calculate AQI\n\t\t 4. EXIT \n\t\t";
		cout << " Choose an option: ";
		cin >> select;
		system("CLS");

		switch (select) {
		case 1:
			// option 1: gives info on air pollution
			for (int i = 0; i < a.length(); ++i) {
				cout << a.at(i);
				Sleep(50);
			}
			Sleep(2000); cout << endl;
			

			for (int t = 0; t < ab.length(); ++t) {
				cout << ab.at(t);
				Sleep(50);
			}
			Sleep(2000); cout << endl;
			
			cout << "\t\t\t Examples: \n";
			// option 1: gives examples 
			for (int g = 0; g < abc.length(); ++g) {
				cout << abc.at(g);
				Sleep(90);
			}
			Sleep(2000);
			break;

		case 2:
			// option 2: gives info on AQI
			for (int f = 0; f < b.length(); ++f) {
				cout << b.at(f);
				Sleep(50);
			}
			Sleep(2000);
			cout << endl;

			for (int b = 0; b < ba.length(); ++b) {
				cout << ba.at(b);
				Sleep(50);
			}
			Sleep(2000);
			break;
		case 3:
			// option 3: Calculates AQI
			MainMenu();
			break;
		case 4: // option 4 : EXIT
			select = 0;
			break;
		}
	}
	system("CLS");
}