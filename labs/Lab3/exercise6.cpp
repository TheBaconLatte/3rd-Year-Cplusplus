/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include "customer.h"

using namespace std;


int main(){
	cout<<"Please input name: "<<endl;
	string input = "";
	cin>>input;
	customer *head = new customer();
	if(input != "end"){
		head = create_list(input);
	}
	cin>>input;
	while(input != "end"){
		insert_name(head, input);
		cin>>input;
	}
	
	int length = list_length(head);
	cout<<"Length of list: "<<length<<endl;

	print_customers(head);
	
	return 0;
	delete head;
}
