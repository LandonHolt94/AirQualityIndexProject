#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "fileMenu.h"
#include "StartMenu.h"
using namespace std;

void MainMenu()
{

	int ch = 1;
	float o, p, q;
	float a, b, d, e;
	while (ch == 1)
	{
		fileMenu();
		cout << "******************************************************************************************\n";   //To display menu of the program
		cout << "\t\t\t\tAQI(Air Quality Index) calculator\n";
		cout << "\n";
		cout << "\t\t\tPollutants used are:\n";
		cout << "\t1 -> Carbon Mono-Oxide(CO)\n";
		cout << "\t2 -> Particulate matter(PM2.5)\n";
		cout << "\t3 -> Particulate matter(PM10)\n";
		cout << "*******************************************************************************************\n";
		cout << "\nEnter the concentration(ppm) of CO-8hr. average:\n";                          //Taking concentrations as the input
		cin >> o;
		cout << "\nEnter the concentration (microgram per cubic metre) of PM2.5 -24 hr. average:\n";
		cin >> p;
		cout << "\nEnter the concentration(microgram per cubic metre) of PM10 -24 hr. average:\n";
		cin >> q;
		a = aqico(o);                                                  // function call to calculate aqi of individual pollutants
		b = aqipm25(p);
		d = aqipm10(q);
		if ((a > b) && (a > d))                                          //calculating AQI of the air(AQI of air is the highest AQI among the given polllutants)
			e = a;
		else if (b > d)
			e = b;
		else
			e = d;
		cout << "\n";
		cout << "\n";
		prescription(e);                                          //prescription function called by passing value of AQI
		cout << "\nWant to continue (1-Continue,0-Exit To Menu)?\n";         // choice given to user whether to continue or exit from the program
		cin >> ch;
		system("cls");
	}

}
