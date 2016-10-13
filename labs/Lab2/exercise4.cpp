/* Kerrie-Ann Sutton
14378311
Program that takes in two strings, finds out the size, and figure out if you can concatinate the two c-strings
If possible, it concatinates them and prints them, if not, an error message is printed
*/
#include <iostream>


using namespace std;

int my_string_len(char str[]){
	int count=0;
	while(str[count]!='\0'){
		++count;
	}
	return count;
}

void my_string_cat(char dest[], char src[], int dest_size){
	int smallsize = my_string_len(src);
	int taken = my_string_len(dest);
	int j = 0;
	if(dest_size-(smallsize+taken)>=0){
		for(int i = taken;i<dest_size;++i){
			dest[i]=src[j];
			++j;
		}
		j=0;
		while(dest[j]!='\0'){
			cout<<dest[j];
			j++;
		}
		cout<<endl;
	}
	else{
		cout<<"No room"<<endl;
	}
}

int main(){
	char fun[] = "hello";
	char final[15] = "world";
	int size = 15; //size of dest string
	my_string_cat(final, fun, size);
	
	



}


