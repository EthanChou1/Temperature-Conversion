// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// idk what im doing

#include <iostream>
using namespace std;

int main()
{
	double ctemp, ftemp;
	string unittemp;

	//Sets up variable
	cout << "Type in what unit of temperature you want to convert: ";
	cin >> unittemp;
	//Units of temperature - no Kelvin yet
	string utemp = "Celsius";
	string utemp2 = "Fahrenheit";
	string utemp3 = "Kelvin";
	cout << "\n";

	//If else statement to compare input
	if (!_stricmp(unittemp.c_str(), utemp.c_str()))
	{
		//Converts celsius
		cout << "Input a Celsius temperature and press ENTER: ";
		cin >> ctemp;
		ftemp = (ctemp * 1.8) + 32;
		cout << "Fahrenheit temperature is: " << ftemp;

		cout << "\n";
	}
	else if (!_stricmp(unittemp.c_str(), utemp2.c_str()))
	{
		//Converts fahrenheit
		cout << "Input a Fahrenheit temperature and press Enter: ";
		cin >> ftemp;
		ctemp = (ftemp - 32) / 1.8;
		cout << "Celsius temperature is: " << ctemp;

		cout << "\n";
	}
	else if (!_stricmp(unittemp.c_str(), utemp3.c_str()))
	{
		//Kelvin is not supported as of yet
		cout << "Kelvin is not a supported unit of temperature as of this version, please try again.";

		cout << "\n";
	}
	else
	{
		//User did not input a unit of temperature
		cout << "You did not input a unit of temperature, please try again.";
		cout << "\n";
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
