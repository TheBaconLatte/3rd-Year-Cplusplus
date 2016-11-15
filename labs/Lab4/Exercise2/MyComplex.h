#include <iostream>


/*Name: Ella Mae Cruz
 *Student Number: 14324961
 *Lab 4 - Exercise 2
 *Header file for exercise 2
 */

using namespace std;

//define class MyComplex
class MyComplex{
	double numReal;
	double numImag;
	

	public:
	//default constructor
	MyComplex(int r = 0, int i = 0): numReal(r), numImag(i){};

	//void setComplex(void){
	//	cout << "Enter the real and imaginary parts: ";
	//	cin >> this -> numReal;
	//	cin >> this -> numImag;
	//}

	//declare getter and setter methods
	double getReal();
	void setReal(double real);
	double getImag();
	void setImag(double imag);

	//declare methods
	MyComplex Add(const MyComplex &z);
	MyComplex Subtract(const MyComplex &z);
	MyComplex Multiply(const MyComplex &z);

	//declare print method
	void printComplex(void);


};

