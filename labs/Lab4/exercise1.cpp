#include <iostream>
#include "die.h"
#include "die.cpp"
#include <cstdlib> //for random
#include <ctime>

using namespace std;

int main(){
	cout<<"Please enter the number of sides on the dice: "<<endl;	
	cout<<"Please input the numbers of times to roll the dice: "<<endl;
	float num;
	cin>>num; // takes in the number of times the user wants to roll the two dice
	for(int i =0;i<num;++i){
		die.roll(sides, num);
	}
}
