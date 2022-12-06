#pragma once
#pragma once
#include <iostream>

using namespace std;


void prescription(float e)                  //Recommendations based off value of the Air Quality Index's value
{
	cout << "\nAQI of the AIR is = " << e;
	cout << "\n";
	cout << "\nRecommendation:";
	if (e >= 0 && e <= 50) cout << "\nThe quailty of air is good and poses no health risk.";

	if (e >= 51 && e <= 100) cout << "\nThe quality of air is moderate; however, unusually sensitive individuals may be affected after prolonged exposure.";

	if (e >= 101 && e <= 150) cout << "\nFor this AQI, members of sensitve groups may expierence health effects. General public is likely not to be affected.";

	if (e > 151 && e <= 200) cout << "\nThe quality of air is unhealthy for everyone, especially people with heart and lung disease. Avoid strenuous and prolonged activities outdoors.";

	if (e >= 201 && e <= 300) cout << "\nThe quality of air is very unhealthy for everyone. People with heart and lung disease should stay indoors.";

	if (e >= 301 && e <= 500) cout << "\nThe quality of air is Hazardous! Everyone should avoid all outdoor activites and remain indoors.";


}