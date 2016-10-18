/* Kerrie-Ann Sutton
14378311
Program that will roll 2 die the amount of times specified by the user, then calculate the total of the result of the 2 die, and print out the amount of times each total occurred in a tabulated format
*/
#include <iostream>
#include <cstdlib> //for random
#include <ctime>

using namespace std;

int main(){
	cout<<"Please input the numbers of times to roll the dice: "<<endl;
	float num;
	cin>>num;
	int d1, d2, total;
	int arr[13] = {}; //initialise empty array to make sure it wasn't filled with random ints
	float per[11] = {};
	srand(time(NULL)); //creates pointer that will point to a random number

	for(int i=0;i<num;++i){
		d1 = (rand() % 6)+1; //gets random number between 1 and 6
		d2 = (rand() % 6)+1;
		total = d1+d2; //adds results together	
		cout<<"Total: "<<total<<endl;		
		for(int j=2;j<13;++j){
			if(j == total){ //if the total is equal to any number between 2 and 12
				++arr[j]; //increment the corresponding slot 	
				
			}	
		
		}
	}
	cout<<"Percentages: "<<endl;
	for(int k = 2;k<13;++k){
		cout<<k<<" \t"; //prints out the totals
	}
	cout<<" \n";
	
	for(int x=2;x<13;++x){		
		per[x]=(arr[x]/num)*100;
		cout<<per[x]<<" \t"; //prints out percentages of each total
		
	}
	cout<<" \n";

	
}
