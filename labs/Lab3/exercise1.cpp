/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>

using namespace std;

int main(){
	cout<<"Please input the length of the sequence: "<<endl;
	int num=0;
	cin>>num;
	double *arr = new double[num]; //initialises 
	for(int i = 0;i<num;++i){
		cin>>arr[i];
	}
	for(int k=num-1;k>=0;--k){
		cout<<arr[k]<<"\t";
	}
	cout<<endl;
	delete arr;
}
