#include <iostream>
#include <iomanip>
#include "Fraction.h"
using namespace std;

Fraction::Fraction(int a = 1, int b = 1){
	numerator = a;
	denominator = b;
};

Fraction::~Fraction(){

};
Fraction Fraction::add(Fraction other)
{

	return(numerator + other.numerator, denominator);
}
Fraction Fraction::subtract(Fraction other)
{
	return(numerator - other.numerator, denominator);
}
Fraction Fraction::multiply(Fraction other)
{
	return(numerator*other.numerator, denominator*other.denominator);
}
Fraction Fraction::divide(Fraction other)
{
	return(numerator*other.denominator, other.numerator*denominator);
}
void Fraction::print()
{
	if (numerator < 0){
		numerator = 0;

		cout << numerator;
	}
	else if (denominator < 1){
		denominator = 1;

		cout << denominator;
	}
	else{
		int mixed = numerator / denominator;
		if (mixed != 0){
			cout << mixed;
		}
		cout << numerator%denominator << "/" << denominator << endl;
	}
}
