/* Kerrie-Ann Sutton
14378311
Lab 2 - Exercise 5
*/
#include <iostream>
using namespace std;
void print_string_array(char str[]){
	int pos = 0;
	while(str[pos]!='\0'){
		cout << str[pos];
		++pos;		
	}	
	cout << " : Array Indexing" << endl;	
}

void print_string_ptr(char *str){
	while(*str!='\0'){
		cout << *str++;		
	}	
	cout <<" : Pointer Transversal" << endl;
}

int main(){
	char str[] = {};
	char *ptr;
	cout << "Please input string: ";
	cin >> str;
	ptr = str;
	print_string_array(str);
	print_string_ptr(ptr);
	
}
