#pragma once

#include <iostream>
using namespace std;



float aqipm10(float q)                         //calculating AQI of particulate matter PM10
{
	cout << "\nAQI of the PM10 = ";
	float c;
	if (q >= 0 && q <= 30)
	{
		c = (0.926 * (q - 0)) + 0;
		cout << c;
		return c;
	}
	else if (q >= 31 && q <= 60)
	{
		c = (0.495 * (q - 55)) + 51;
		cout << c;
		return c;
	}
	else if (q >= 61 && q <= 90)
	{
		c = (0.495 * (q - 155)) + 101;
		cout << c;
		return c;
	}
	else if (q >= 91 && q <= 120)
	{
		c = (0.495 * (q - 255)) + 151;
		cout << c;
		return c;
	}
	else if (q >= 121 && q <= 250)
	{
		c = (1.434 * (q - 355)) + 201;
		cout << c;
		return c;
	}
	else if (q >= 251 && q <= 380)
	{
		c = (1.112 * (q - 425)) + 301;
		cout << c;
		return c;
	}

}
