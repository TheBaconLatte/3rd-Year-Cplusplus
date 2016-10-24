/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>
#include <cstdlib>

using namespace std;

struct customer{
	string name;	
	customer *next;
};


void print_customer(customer &head) //method to print list
{
	customer *cur = &head; //sets current to the head of the list
	while(cur != NULL)
	{
		cout<<cur->name<<endl; //dereferences pointer to print value of name
		cur = cur->next; //sets current to the next address in list
	}
}

