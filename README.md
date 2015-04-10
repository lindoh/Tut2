# Tut2
#ifndef Fraction_h
#define Fraction_h
#include <iostream>
using namespace std;

class Fraction
{


public:
	Fraction(int a=1, int b=1)				// constructor initialises the numerator a & denominator b
	void setNumerator(int a);				//modify the numerator 
	int getNumerator();				//return a modified numerator value
	void setDenominator(int b);				//modify the denominator
	int getDenominator();					//return an appropriate denominator

	int Add(int,int,int,int);				//find the sum of two fractions
	int Subtract(int,int,int,int);				//find the difference between two fractions
	int Multiply(int,int,int,int,);				//find the product
	int Divide(int,int,int,int);				//divide two fractions
	void Print();						//print out the results
	
private:
	int Numerator;						
	int Denominator;

	~Fraction();					//default destructor
};

#endif 

//main driver program
#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{


	Fraction frac1(5, 3);

	Fraction frac2(2, 2);


	frac1.add(frac2).print();

	system("pause");
	return 0;
}

