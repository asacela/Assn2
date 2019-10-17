#include <iostream>
using namespace std;

#include "Stack.h"

int main() {
	
	// cout << "Initial Array: [";
	// for (int i = 0; i < size - 1; i++) {
	// 	cout << array[i] << ", ";
	// }
	// cout << array[size - 1] << ']' << endl << endl;

	

	cout << "Array after calling pushFirst: [";
	for (int i = 0; i < size - 1; i++) {
		cout << array[i] << ", ";
	}
	cout << array[size - 1] << ']' << endl << endl;

	cout << "Inserting '28' into second stack using pushSecond..." << endl << endl;
	if ((secondCapacity + 1) != (size / 2)) {
		second.pushSecond(array, size, 28);
		secondCapacity++;
	} else {
		int *newArray = new int[size * 2];
		for (int i = 0; i < size / 2; i++) {
			newArray[i] = array[i];
		}
		for (int j = size / 2; j < size; j++) {
			newArray[j] = array[j];
		}
		delete[] array;
		array = newArray;
		size = size * 2;
		second.pushSecond(array, size, 8);
		secondCapacity++;
	}

	cout << "Array after calling pushSecond: [";
	for (int i = 0; i < size - 1; i++) {
		cout << array[i] << ", ";
	}
	cout << array[size - 1] << ']' << endl << endl;

	int pop;

	cout << "First stack calling popFirst..." << endl << endl;
	pop = first.popFirst(array, size);
	cout << "Value popped from first stack is " << pop << '.' << endl << endl;
	int *newArray = new int[size - 1];
	int j = 0;
	for (int i = 1; i < size; i++) {
		newArray[j] = array[i];
		j++;
	}
	delete[] array;
	array = newArray;
	size = size - 1;
	firstCapacity--;

	cout << "Array after calling popFirst: [";
	for (int i = 0; i < size - 1; i++) {
		cout << array[i] << ", ";
	}
	cout << array[size - 1] << ']' << endl << endl;

	cout << "Is the first stack empty? ";
	if (first.isEmptyFirst(firstCapacity)) {
		cout << "Yes because the capacity of the first stack is " << firstCapacity << '.' << endl << endl;
	} else {
		cout << "No because the capacity of the first stack is " << firstCapacity << '.' << endl << endl;
	}

	cout << "Is the second stack empty? ";
	if (second.isEmptySecond(secondCapacity)) {
		cout << "Yes because the capacity of the second stack is " << secondCapacity << '.' << endl << endl;
	} else {
		cout << "No because the capacity of the second stack is " << secondCapacity << '.' << endl << endl;
	}

	cout << "What is the length of the first stack? " << first.getLengthFirst(array, size) << '.' << endl << endl;

	cout << "What is the length of the second stack? " << second.getLengthSecond(array, size) << '.' << endl << endl;

	cout << "Second Stack calling popSecond..." << endl << endl;
	pop = second.popSecond(array, size);
	cout << "Value popped from second stack is " << pop << '.' << endl << endl;
	newArray = new int[size - 1];
	for (int i = 0; i < size / 2; i++) {
		newArray[i] = array[i];
	}
	int k = size / 2;
	for (int j = (size / 2) + 1; j < size; j++) {
		newArray[k] = array[j];
		k++;
	}
	delete[] array;
	array = newArray;
	size = size - 1;
	secondCapacity--;

	cout << "Array after calling popSecond: [";
	for (int i = 0; i < size - 1; i++) {
		cout << array[i] << ", ";
	}
	cout << array[size - 1] << ']' << endl << endl;

	int peek;

	peek = first.peekFirst(array, size);
	cout << "Top value in the first stack is " << peek << '.' << endl << endl;

	peek = second.peekSecond(array, size);
	cout << "Top value in the second stack is " << peek << '.' << endl << endl;

	delete[] array;

	return 0;
}
