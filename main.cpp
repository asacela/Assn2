#include <iostream>
using namespace std;

#include "Stack.h"

int main() {
	Stack list;
	char userChar = ' ';
	while (userChar != 'q'){
		cout << "Enter a for pushFirst" << endl
				 << "Enter b for pushSecond" << endl
				 << "Enter c for popFirst" << endl
				 << "Enter d for popSecond" << endl
				 << "Enter e for peekFirst" << endl
				 << "Enter f for peekSecond" << endl
				 << "Enter p to print" << endl
				 << "Enter q to quit" << endl;
		cin >> userChar;
		cout << endl;

		if(userChar == 'a'){}
		else if(userChar == 'b'){}
		else if(userChar == 'c'){}
		else if(userChar == 'd'){}
		else if(userChar == 'e'){}
		else if(userChar == 'f'){}
		else if(userChar == 'p'){}
		else{
			cout << "Invalid command." << endl;
		}
	}

	return 0;
}
