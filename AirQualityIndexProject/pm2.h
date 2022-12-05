#pragma once
#include <iostream>

using namespace std;

float aqipm25(float p)           //calculating AQI of particulate matter PM2.5
{
	float c;

	cout << "\nAQI of PM2.5 = ";

	if (p >= 0.0 && p <= 12.0)
	{
		c = (4.166 * (p - 0.0)) + 0;
		cout << c;
		return c;
	}
	else if (p >= 12.1 && p <= 35.4)
	{
		c = (2.103 * (p - 12.1)) + 51;
		cout << c;
		return c;
	}
	else if (p >= 35.5 && p <= 55.4)
	{
		c = (2.462 * (p - 35.5)) + 101;
		cout << c;
		return c;
	}
	else if (p >= 55.5 && p <= 150.4)
	{
		c = (0.516 * (p - 55.5)) + 151;
		cout << c;
		return c;
	}
	else if (p >= 150.5 && p <= 250.4)
	{
		c = (0.990 * (p - 150.5)) + 201;
		cout << c;
		return c;
	}
	else if (p >= 250.5 && p <= 500.4)
	{
		c = (0.796 * (p - 250.5)) + 301;
		cout << c;
		return c;
	}
}
