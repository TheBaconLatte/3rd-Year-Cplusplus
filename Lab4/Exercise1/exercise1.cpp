/*Kerrie-Ann Sutton
14378311
Program that takes in the number of sides on two die, the number of times to roll the die, and outputs the percentage total of each result
*/
#include <iostream>
#include "die.h"
#include "die.cpp"
#include <ctime>
#include <cstdlib>
#include <iomanip> //to set decimal places

using namespace std;
int total_, max_, sides_;
float num_;

int main(){
	srand(time(NULL)); //creates a thing that will point to a random number
	cout<<"Please enter the number of sides on the dice: "<<endl;	
	cin>>sides_;
	die dice_1(sides_);
	sides_ = dice_1.getNumsides();
	cout<<"Please input the numbers of times to roll the dice: "<<endl;
	cin>>num_; // takes in the number of times the user wants to roll the two dice
	max_ = (sides_*2);
	int *arr = new int[max_]; //initialise empty array to make sure it wasn't filled with random ints
	float *per = new float[max_];
	for(int n = 0;n<max_;++n){
		arr[n] = 0; //fills arrays with zero
		per[n] = 0;
	}	
	for(int i=0;i<num_;++i){ //goes through the number of times the dice is to be rolled
		dice_1.roll();
		total_ = dice_1.getValue();
		for(int j=2;j<max_;++j){
			if(j == total_){ //if the total is equal to any number between 2 and 12
				++arr[j]; //increment the corresponding slot 	
				
			}	
	
		}	
	}
	cout<<"Percentages: "<<endl;	
	for(int x=2;x<max_;++x){
		if(arr[x]!=0){		
			per[x]=(arr[x]/num_)*100;
			cout<<x<<" occurred "<<setprecision(2)<<fixed<<per[x]<<"%"<<" of the time."<<endl; //prints out percentages of each total to two decimal places
		}
	}
	cout<<" \n";
	
	delete[] arr;
	delete[] per;
	return 0;
}
