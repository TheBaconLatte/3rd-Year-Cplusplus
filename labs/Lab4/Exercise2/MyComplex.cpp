/*Name: Ella Mae Cruz
 *Student Number: 14324961
 *Lab 4 - Exercise 2
 *
 *Contains method definitions
*/

#include <iostream>
#include "MyComplex.h"

using namespace std;

//definition of getReal method
double MyComplex::getReal(){
		return numReal;
	}

//definition of setReal method
	void MyComplex::setReal(double real){
		cin >> this -> numReal;
		cout << numReal << endl;
	}

//definition of getImag method
	double MyComplex::getImag(){
		return numImag;
	}

//definition of setImag method
	void MyComplex::setImag(double imag){
		cin >> this -> numImag;
		cout << numImag << endl;
	}

//definition of Addition method
	MyComplex MyComplex::Add(const MyComplex &z){
		MyComplex comp;
		
		comp.numReal = this -> numReal + z.numReal;
		comp.numImag = this -> numImag + z.numImag;
		
		return comp;
	}	
	
//definition of Subtraction method
	MyComplex MyComplex::Subtract(const MyComplex &z){
		MyComplex comp;
		
		comp.numReal = this -> numReal - z.numReal;
		comp.numImag = this -> numImag - z.numImag;

		return comp;
	}

//definition of Multiplication
	MyComplex MyComplex::Multiply(const MyComplex &z){
		MyComplex comp;
		comp.numReal = this -> numReal * z.numReal;
		comp.numImag = this -> numImag * z.numImag;
		
		return comp;
	}
	
//definition of print method	
	void MyComplex::printComplex(void){
		cout << this -> numReal << " + " << this -> numImag 			<< "i" << endl;
		//cout << "Imaginary:	" << this -> numImag << endl;

	}

