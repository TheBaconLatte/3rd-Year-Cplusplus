/* Kerrie-Ann Sutton
14378311
Linked list structure using pointers
*/
#include <iostream>
#include <string>

using namespace std;

struct customer{
	string name;
	customer *next;
};

void print_customers(customer &head) //method to print list
{
	customer *cur = &head; //sets current to the head of the list
	while(cur != NULL)
	{
		cout<<cur->name<<endl; //dereferences pointer to print value of name
		cur = cur->next; //sets current to the next address in list
	}
}

int main(){
	customer customer1, customer2, customer3;
	customer1.next=&customer2; //creates a link between 1 and 2
	customer2.next=&customer3;
	customer3.next=NULL; //ends the list
	customer1.name="Jack";
	customer2.name="Jane";
	customer3.name="Joe";
	print_customers(customer1);
	return 0;
}
