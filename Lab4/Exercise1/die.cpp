/* Kerrie-Ann Sutton
14378311
contains die, getNumsides, getValue, roll methods

*/

#include <iostream>
#include <cstdlib> //for random
#include <ctime> //rand uses time
#include "die.h"

using namespace std;


die::die(int sides){
	
	if(sides<4){
		sides_=6;
		cout<<"ERROR: The dice cannot have less than 4 sides. Sides has been reset to 6."<<endl;
	}
	else{
		sides_ = sides;
	}
}

int die::getNumsides(){ //gets the number of sides for each die
	return sides_;
}

void die::roll(){
	int d1, d2;
	d1 = (rand() % sides_)+1; //gets random number between 1 and 6
	d2 = (rand() % sides_)+1;
	total_ = d1+d2; //adds results together			

}

int die::getValue(){
	return total_;
}
