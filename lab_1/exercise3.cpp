/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>

using namespace std;

int main(){
	int a, b, c, d, e, f;
	cin>>a;
	b = a/10000;
	c = (a/1000)%10;
	d = (a/100)%10;
	e = (a/10)%10;
	f = a%10;

	cout<<b<<"   "<<c<<"   "<<d<<"   "<<e<<"   "<<f<<endl;
}

