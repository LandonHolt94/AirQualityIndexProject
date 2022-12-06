#pragma once
#include <iostream>
using namespace std;


float aqico(float o)                    //CAlculating the AQI of carbon mono oxide
{
    float c;

    cout << "\nAQI of CO = ";

    if (o >= 0.0 && o <= 4.4)
    {
        c = (11.364 * (o - 0.0)) + 0;
        cout << c;
        return c;
    }
    else if (o >= 4.5 && o <= 9.4)
    {
        c = (10 * (o - 4.5)) + 51;
        cout << c;
        return c;
    }
    else if (o >= 9.5 && o <= 12.4)
    {
        c = (16.896 * (o - 9.5)) + 101;
        cout << c;
        return c;
    }
    else if (o >= 12.5 && o <= 15.4)
    {
        c = (16.896 * (o - 12.5)) + 151;
        cout << c;
        return c;
    }
    else if (o >= 15.5 && o <= 30.4)
    {
        c = (6.644 * (o - 15.5)) + 201;
        cout << c;
        return c;
    }
    else if (o >= 30.5 && o <= 50.4)
    {
        c = (10 * (o - 30.5)) + 301;
        cout << c;
        return c;
    }
}