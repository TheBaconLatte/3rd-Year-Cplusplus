/* Kerrie-Ann Sutton
14378311
Program to find the greatest common dividor of 2 input numbers
*/
#include <iostream>

using namespace std;

int gcd(int &x,int &y){ //reference the numbers
	int gcd;
	for(int i = 1;i<=x&&i<=y;++i){ //starts from 1 because you can't divide by 0
		if(x%i==0&&y%i==0){ //if both divisible
			gcd = i;	
		}
	}
	cout<<"The greatest common dividor of "<<x<<" and "<<y<<" is: "<<gcd<<endl;
	return 0; //function expecting int return

} 

int main(){
	int a, b;
	cout<<"Please enter two numbers to find the greatest common divisor:"<<endl;
	cin>>a;
	cin>>b;
	gcd(a,b);
}

