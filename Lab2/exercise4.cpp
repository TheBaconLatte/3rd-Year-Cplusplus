/* Kerrie-Ann Sutton
14378311
Program that takes in two strings, finds out the size, and figure out if you can concatinate the two c-strings
If possible, it concatinates them and prints them, if not, an error message is printed
*/
#include <iostream>


using namespace std;

int my_string_len(char str[]){
	int count=0;
	while(str[count]!='\0'){ //while the character is not a null value
		++count;	//increment
	}
	return count; //returns size of c-string
}

void my_string_cat(char dest[], char src[], int dest_size){
	int smallsize = my_string_len(src); //finds in size of source c-string
	int taken = my_string_len(dest); //finds out how much of the destination c-string is actually in use
	int j = 0;
	if(dest_size-(smallsize+taken)>=0){ //if there is enough free space in the destination string
		for(int i = taken;i<dest_size;++i){ 
			dest[i]=src[j]; //add on source c-string
			++j; //keeps track of index of source string
		}
		j=0;
		while(dest[j]!='\0'){
			cout<<dest[j];
			j++; //prints out final string
		}
		cout<<endl;
	}
	else{
		cout<<"No room"<<endl; //if there's no room, prints out "no room"
	}
}

int main(){
	char fun[] = "hello";
	char final[15] = "world";
	int size = 15; //size of dest string
	my_string_cat(final, fun, size);

}


