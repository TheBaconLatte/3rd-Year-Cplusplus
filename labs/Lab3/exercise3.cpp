/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>

using namespace std;


int main(){
	struct people{
		string name;
		int age;
	};


	int num = 0;
	cout<<"Please input the number of people: "<<endl;
	cin>>num;
	people *arr = new people[num]; //intialises array on heap
	cout<<"Please input the name, then press enter, then age, then press enter: "<<endl;
	for(int i =0;i<num;++i){
		cin>>arr[i].name; //takes in name for section in array
		cin>>arr[i].age; //takes in age for section in array
	}
	
	cout<<"Reverse Order: "<<endl;

	for(int j =num-1;j>=0;--j){
		cout<<arr[j].name<<"\t"<<arr[j].age<<endl; //prints info in reverse order on the same line
	}

	delete[] arr; //deletes memory allocated on heap for array
}
