#pragma once
#pragma once
#include <iostream>

using namespace std;


void prescription(float e)                  //prescription as per the value of AQI
{
	cout << "\nAQI of the AIR is = " << e;
	cout << "\n";
	cout << "\nRecommendation:";
	if (e >= 0 && e <= 50) cout << "\nAir Quality is in nominal levels and poses little or no health risk.";

	if (e >= 51 && e <= 100) cout << "\nAir quality is acceptable; however in this range may pose a moderate health concern for a small number of individuals.";

	if (e >= 101 && e <= 150) cout << "\nFor this value of AQI, members of sensitive groups may experience health effects, but the general public is unlikely to be affected";

	if (e > 151 && e <= 200) cout << "\nEveryone may begin to experience health effects for this value of AQI. Those who are sensitive may experience more serious health effects";

	if (e >= 201 && e <= 300) cout << "\nThis AQI value may trigger a health alert, meaning everyone may experience more serious health effects";

	if (e >= 301 && e <= 500) cout << "\nAQi values over 300 trigger health warnings of emergency conditions. The entire population of the city is even more likely to be affected by serious health effects";


}