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

		switch(userChar){

			case 'A':
			case 'a':

				cout << "Enter an integer to push to the First Stack: ";
				cin >> userInt;

				list.pushFirst(userInt);

				cout << endl;

				break;

			case 'B':
			case 'b':

				cout << "Enter an integer to push to the Second Stack: ";
				cin >> userInt;

				list.pushSecond(userInt);

				cout << endl;

				break;

			case 'C':
			case 'c':

				cout << "Popping " << list.peekFirst() << " off First Stack";

				list.popFirst();

				cout << endl;

				break;

			case 'D':
			case 'd':

				cout << "Popping " << list.peekSecond() << " off Second Stack";

				list.popSecond();

				cout << endl;

				break;

			case 'E':
			case 'e':

				cout << "Printing head of first stack: " << list.peekFirst() << endl;

				break;

			case 'F':
			case 'f':

				cout << "Printing head of second stack: " << list.peekSecond() << endl;

				break;

			case 'P':
			case 'p':

				list.printFirst();
				list.printSecond();

				cout << endl;

				break;

			default:
				cout << "Invalid command" << endl;
				break;
		}
	}



	return 0;
}
