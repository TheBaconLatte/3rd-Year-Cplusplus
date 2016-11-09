/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>

#pragma once
using namespace std;

struct customer{
	string name;	
	customer *next;
};

void print_customer(customer &head);


