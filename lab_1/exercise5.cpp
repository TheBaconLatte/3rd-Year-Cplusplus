/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>

using namespace std;

int main(){
	
	int count = 0; 
	int j =0;
	for(int x =2;x<=5000;++x){
		for(int i =2;i<x/2;++i){ //finds and prints all prime numbers
			if(x%i==0 && x!=i && x!=2){
				++count;
			}
		}
		if(count == 0){
	
 			cout << x<<endl;
			}
		count =0;
	}

}

