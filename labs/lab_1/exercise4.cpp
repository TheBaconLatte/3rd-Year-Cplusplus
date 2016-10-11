/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>

using namespace std;

int main(){
int accnum, bal, charges, credits, lim, bewb;
cout<<"Please input your account number"<<endl;
cin>>accnum;
if(accnum == -1){
cout<<"Terminated"<<endl;
}
else{
cout<<"Balance"<<endl;
cin>>bal;
cout<<"Charges"<<endl;
cin>>charges;
cout<<"Credits"<<endl;
cin>>credits;
cout<<"Limit"<<endl;
cin>>lim;

bewb = (bal + charges - credits);

if(bewb > lim){
	cout << "exceeded"<<endl ;
}
else
	cout << "not exceeded"<<endl;

cout << endl;
main();
}
}

