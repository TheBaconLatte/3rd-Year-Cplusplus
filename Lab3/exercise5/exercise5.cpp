/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>
#include <cstdlib>
#include "customers.h"

using namespace std;

int main(){
	customer customer1, customer2, customer3;
	customer1.next=&customer2; //creates a link between 1 and 2
	customer2.next=&customer3;
	customer3.next=NULL; //ends the list
	customer1.name="Jack";
	customer2.name="Jane";
	customer3.name="Joe";
	print_customer(customer1);
	return 0;
}
