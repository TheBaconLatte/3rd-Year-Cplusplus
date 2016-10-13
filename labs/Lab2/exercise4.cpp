/* Kerrie-Ann Sutton
14378311
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

}

int main(){
	char fun[] = "hello";
	char final[20] = "world";
	int size = 0;
	size = my_string_len(fun);
	cout<< "Size of first string: \n"<<size<<endl;
	



}


