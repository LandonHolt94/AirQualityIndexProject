#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string input;
    ifstream cityFile;
    string city;

    cityFile.open("city.txt");

    cout << "Enter the city you'd like to see. " << endl;
    cin >> city;
    bool isfound = 0;

    while (!cityFile.eof())
    {
        string temp = " ";
        getline(cityFile, temp);

        for (int i = 0; i < city.size(); i++)
        {
            if (tolower(temp[i]) == tolower(city[i]))
                isfound = 1;
            else
            {
                isfound = 0;
                break;
            }
        }
        if (isfound)
        {
            cout << "GOOD" << endl;
            for (int i = city.size() + 1; i < temp.size(); i++)
                cout << temp[i];
            break;
        }
    }
    if (cityFile.eof() && (!isfound))
    {
        cout << "City not found";
    }
    cityFile.close();
}