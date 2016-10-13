/* Kerrie-Ann Sutton
14378311
Program that switches values of 2 different numbers
*/
#include <iostream>

using namespace std;

void my_swap(int &a, int &b){ // pass by reference for changes to take effect
	int temp;
	temp = a;
	a = b;
	b = temp;

} 

int main(){
	int num1;
	int num2;
	cout<<"Please input two different numbers: "<<endl;
	cin>>num1;
	cin>>num2;
	cout<<"Your two numbers are: "<<num1<<" and "<<num2<<endl;
	my_swap(num1,num2);
	cout<<"The numbers after swapping are: "<<num1<<" and "<<num2<<endl;
}


