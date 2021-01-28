/* Team 4 - 9/7/2020
Mod 1 Lab 1 
This program uses the Vehicle class and its member functions. */
#include "Vehicle.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int year;     //holds user-inputted year model of car
	string make;  //holds user-inputted make of car
	string input; //holds user's input to be converted to int

	// Get the year of the car.
	cout << "What is the year of the car? ";
	getline(cin, input);
	year = stoi(input);
	
	// Get the make of the car.
	cout << "What is the make of the car? ";
	getline(cin, make);

	// Create a Vehicle object.
	Vehicle car(year, make);

	// Accelerate the car fifty times.
	cout << "The " << car.getYear() << " " << car.getMake() << " is now accelerating." << endl;
	for (int ctr = 1; ctr <= 50; ctr++)
	{
		car.accelerate();
		cout << "The car's speed is " << car.getSpeed() << " mph." << endl;
	}

	// Apply the brakes on the car fifty times.
	cout << "The " << car.getYear() << " " << car.getMake() << " is now braking." << endl;
	for (int ctr = 1; ctr <= 50; ctr++)
	{
		car.brake();
		cout << "The car's speed is " << car.getSpeed() << " mph." << endl;
	}

	system("Pause");
	return 0;
}