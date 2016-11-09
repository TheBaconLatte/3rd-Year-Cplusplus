/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>

using namespace std;

int main(){
int a, b, c;
cin>>a>>b>>c;

int sum = a+b+c;
cout<< sum <<endl;
cout<< sum/3<<endl;
cout<< (a*b*c)<<endl;
int smallest = a;
if(b<smallest){
smallest = b;
}
if(c<smallest){
smallest = c;
}
cout<<smallest<<endl;

int biggest = a;
if(b>biggest){
biggest = b;
}
if(c>biggest){
biggest =c;
}
cout<<biggest<<endl;
}
