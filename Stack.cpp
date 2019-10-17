#include <iostream>
using namespace std;

#include "Stack.h"

Stack::Stack() {
	size = 10;
	array = new int [size];
	firstSize = 0;
	secondSize = 0;
}

Stack::~Stack() {
	delete[] array;
}

void Stack::pushFirst(int data) {

	if (firstSize + 1 <= (size / 2)) {
		// Move each element one over
		for(int i = firstSize - 1; i >= 0; --i){
			array[i + 1] = array[i];
		}
		array[0] = data;
		firstSize++;
	}
	else{
		doubleArraySize();
		pushFirst(data);
	}
}

void Stack::pushSecond(int data) {

	if (secondSize + 1 <= (size / 2)) {
		for(int i = secondSize - 1 + (size / 2); i >= (size / 2); --i){
			array[(size / 2) + i + 1] = array[(size / 2) + i];
		}
		array[(size/2)] = data;
		secondSize++;
	}
	else{
		doubleArraySize();
		pushSecond(data);
	}
}

void Stack::popFirst() {

	if(!isEmptyFirst()){
		for(int i = 0; i < firstSize - 1; ++i){
			array[i] = array[i + 1];
		}
		firstSize--;
	}
	else{
		// do nothing
	}
}

void Stack::popSecond() {

	if(!isEmptySecond()){
		for(int i = 0; i < secondSize - 1; ++i){
			array[(size/2) + i] = array[(size/2) + i + 1];
		}
		secondSize--;
	}
	else{
		// do nothing
	}
}

int Stack::peekFirst() {

	if(!isEmptyFirst()){

		return array[0];
	}
	else{ 

		cout << "First Stack is Empty." << endl;
	
		return 0;
	}
}

int Stack::peekSecond() {

	if(!isEmptySecond()){

		return array[(size / 2)];
	}
	else{ 

		cout << "Second Stack is Empty." << endl;
	
		return 0;
	}
}

bool Stack::isEmptyFirst() {

	if (firstSize == 0) {

		return true;
	} 
	else {

		return false;
	}
}

bool Stack::isEmptySecond() {

	if (secondSize == 0) {

		return true;
	} 
	else {

		return false;
	}
}

int Stack::getLengthFirst() {

	return firstSize;
}

int Stack::getLengthSecond() {

	return secondSize;
}

void Stack::doubleArraySize(){
	cout << "Doubling Array Size..." << endl;
	int new_size = size * 2;
	int *temp = new int [new_size];

	// Copy first half
	for(int i = 0; i < (size / 2); ++i){
		temp[i] = array[i];
	}

	// Copy second half
	int j = 0;
	for(int i = (size / 2); i < size; ++i){
		temp[(new_size / 2) + j] = array[i];
		j++;
	}

	size = new_size;
	delete[] array;
	array = temp;
}

void Stack::printFirst(){

	cout << "Printing First Stack: ";

	for (int i = 0; i < firstSize; ++i) {
		if(i == 0){
			cout << array[i];
		}
		else{
			
			cout << ", " << array[i];
		}
		
	}

	cout << endl;

}

void Stack::printSecond(){

	cout << "Printing Second Stack: ";

	for (int i = 0; i < secondSize; ++i) {

		if(i == 0){
			cout << array[(size / 2) + i];
		}
		else{

			cout << ", " << array[(size / 2) + i];
		}
		
	}

	cout << endl;

}


