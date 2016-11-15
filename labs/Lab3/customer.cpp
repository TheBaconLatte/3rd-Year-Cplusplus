/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include "customer.h"

using namespace std;


customer *create_list(string name){
	customer *head = new customer();
	head -> name = name; //sets the value of head
	head -> next = NULL; //sets next space as null
	return head;
}
void insert_name(customer* head, string name){
	customer *new_cust = head;
	while(new_cust -> next != NULL){
		new_cust = new_cust -> next; //finds next free space in linked list
	}
	/*new_cust -> next = new customer();
	new_cust -> next -> name = name;
	new_cust -> next -> next = NULL;
*/}
int list_length(customer* head){
	int count = 1;
	customer *next_cust = head; //sets variable to beginning of list
	while(next_cust != NULL){
		next_cust = next_cust -> next;
		++count;
	}
	return count;	
}


void print_customers(customer* head){
	customer* cur = head; //sets current to the head of the list
	while(cur != NULL)
	{
		cout<<cur->name<<endl; //dereferences pointer to print value of name
		cur = cur->next; //sets current to the next address in list
	}
}

