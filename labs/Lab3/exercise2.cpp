/* Kerrie-Ann Sutton
14378311
*/
#include <iostream>
#include <stack>

using namespace std;

int main() {
	//takes in user input - numbers that will go into the seq
	int num = 0;
	//stores these numbers into a stack
	stack <int> myStack;

	//loop will run until user inputs -1
	while(num != -1){
	
	cout << "Please enter a number: " << endl;
	cin >> num;
	
	//stop working if input is -1
	if(num == -1){
	break;
	}	
	
	//pushes the numbers into the stack
	myStack.push(num);
	}

	/*while stack is not empty, numbers will be popped out of the stack
	*/
	while(!myStack.empty()){
	//looks at the top number and prints it out
	cout << myStack.top() << endl;
	//pops it out of the stack
	myStack.pop();

	}
	return 0;
}


