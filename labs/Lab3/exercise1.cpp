/* Kerrie-Ann Sutton
14378311
Program that takes in a sequence of doubles and prints them in reverse order
*/
#include <iostream>

using namespace std;

int main(){
	cout<<"Please input the length of the sequence: "<<endl;
	int num=0;
	cin>>num; //user inputs length of array
	double *arr = new double[num]; //initialises array on heap
	for(int i = 0;i<num;++i){
		cin>>arr[i]; //adds input values to array
	}
	for(int k=num-1;k>=0;--k){
		cout<<arr[k]<<"\t"; //prints array in reverse order
	}
	cout<<endl;
	delete arr; //deletes memory to prevent memory leak
}
