/*Kerrie-Ann Sutton
14378311
Operator Overloader question
*/

#include <iostream>
#include "MyComplex.h"

using namespace std;

main(){
	//declare variables that will be used to store the user 	inputs and the results from the three methods
	MyComplex a, b, c, d, e;
	//declare double variables that will be used to store the 		real and imaginary numbers entered by user - will be passed 		into the methods
	double r,i,r2,i2;
	

	cout << "Enter first real number: " << endl;
	//cin >> r;
	//a.getReal();
	a.setReal(r);

	cout << "Enter first imaginary number: " << endl;
	//cin >> i;
	//a.getImag();
	a.setImag(i);

	cout << "Enter second real number: " << endl;
	//cin >> r2;
	//b.getReal();
	b.setReal(r2);

	cout << "Enter second imaginary number: " << endl;
	//cin >> i2;
	//b.getImag();
	b.setImag(i2);
	
	cout << "Addition of a and b: " << endl;
	c = a+b; //replaced .Add() method with + operator
	c.printComplex();
	
	cout << "Subtraction of a and b: " << endl;
	d = a-b;
	d.printComplex();

	cout << "Multiplication of a and b: " << endl;
	e = a*b;
	e.printComplex();
}
