/* Kerrie-Ann Sutton
14378311
contains die, getNumsides, getValue, roll methods
same functionality as lab2 exercise3
*/

#include <iostream>
#include <cstdlib> //for random
#include <ctime> //rand uses time
#include <iomanip> //to set decimal places
#include "die.h"

using namespace std;
int total, max;

int die(){
	int sides
	sides = getNumsides();
	max = sides*2;
	roll(sides);
	int arr[max] = {}; //initialise empty array to make sure it wasn't filled with random ints
	float per[max-1] = {};
	for(int j=2;j<=max;++j){
		if(j == total){ //if the total is equal to any number between 2 and 12
			++arr[j]; //increment the corresponding slot 	
				
		}	
	
	}
	cout<<"Percentages: "<<endl;	
	for(int x=2;x<=max;++x){
		if(arr[x]!=0){		
			per[x]=(arr[x]/num)*100;
			cout<<arr[x]<<"Occurred "<<setprecision(2)<<fixed<<per[x]<<"percent of the time"<<" \t"; //prints out percentages of each total to two decimal places
		}
	}
	cout<<" \n";

	
}

int getNumsides(){ //gets the number of sides for each die
	int sides;
	cin>>sides;
	if(sides<4){
		sides=6;
		cout<<"The dice cannot have less than 4 sides, it has been reset to 6."<<endl;
	}
	return sides;
}

int getValue(){
	return total;
}

int roll(sides, num){
	srand(time(NULL)); //creates pointer that will point to a random number
	int d1, d2;
	for(int i=0;i<num;++i){
		d1 = (rand() % sides)+1; //gets random number between 1 and 6
		d2 = (rand() % sides)+1;
		total = d1+d2; //adds results together			
		return total;
	}
}
