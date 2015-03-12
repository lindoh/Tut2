# Tut2
#include <iostream>
using namespace std;

class Fraction
{
private:
	float xValue;					//first fraction variable
	float yValue;					//second fraction variable

public:
	Fraction(float x = 0.00, float y = 0.00)				// constructor initialises the class objects

		: xValue(), yValue() {}

	float getxValue() const{ return xValue; }				//Read state info. from an object
	void setxValue(float x) { xValue = x; }					//to change the state of an object

	float getyValue() const { return yValue; }				//Read state info. from an object
	void setyValue(float y) { yValue = y; }					//to change the state of an object

	float Add()
	{
		return xValue + yValue;
	}

	float Subtract()
	{
		return xValue - yValue;
	}

	float Multiply()
	{
		return xValue*yValue;
	}

	float Divide()
	{
		return xValue / yValue;
	}

	void Print()
	{
		cout << "The numbers are X = " << xValue << " & Y = " << yValue << endl;
		cout << "Addition Result : X + Y = " << Add() << endl;
		cout << "Subtraction Result : X - Y = " << Subtract() << endl;
		cout << "Multiplication Result : X * Y = " << Multiply() << endl;
		cout << "Division Result : X/Y = " << Divide() << endl;

	}

	~Fraction();
};


