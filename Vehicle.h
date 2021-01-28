#pragma once //what's this?
// This is a specification file for the Vehicle class.
// Visual Studio forces this program to look a little bloated. Too many lines. Apology, apology.
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
private:
	int speed = 0; //holds vehicle's current speed; initializes to 0
	int year;      //holds vehicle's year model
	string make;   //holds vehicle's make
public:
	Vehicle(int y, string m) //constructor
	{
		year = y; //assigns user-inputted argument to year variable
		make = m; //assigns user-inputted argument to make variable
	}

	~Vehicle() //destructor
	{}

	//function to get current speed of vehicle
	int getSpeed() const
	{
		return speed;
	}

	//function to get year model of vehicle
	int getYear() const
	{
		return year;
	}

	//function to get make of vehicle
	string getMake() const
	{
		return make;
	}

	//function to accelerate vehicle by adding 1 to speed
	void accelerate()
	{
		speed += 1;
	}

	//function to apply brakes to vehicle by subtracting 1 from speed
	void brake()
	{
		speed -= 1;
	}
};
#endif