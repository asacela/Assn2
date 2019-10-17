#include <iostream>
using namespace std;

#include "Stack.h"

Stack::Stack() {
	size = 10;
	array = new int [size];
	firstCapacity = 0;
	secondCapacity = 0;
}

void Stack::pushFirst(int data) {

	if (firstCapacity < (size / 2) - 1) {

		for(int i = 0; i < firstCapacity; ++i){
			array[i+1] = array[i];
		}

		array[0] = data;


		firstCapacity++;
	}

}

void Stack::pushSecond(int data) {
	array[size / 2] = data;
}

int Stack::popFirst() {
	return array[0];
}

int Stack::popSecond() {
	return array[size / 2];
}

int Stack::peekFirst() {
	return array[0];
}

int Stack::peekSecond() {
	return array[size / 2];
}

bool Stack::isEmptyFirst() {
	if (firstCapacity == 0) {
		return true;
	} else {
		return false;
	}
}

bool Stack::isEmptySecond() {
	if (secondCapacity == 0) {
		return true;
	} else {
		return false;
	}
}

int Stack::getLengthFirst(int array[], int size) {
	int stackLength = 1;
	for (int i = 1; i < size / 2; i++) {
		stackLength++;
	}
	return stackLength;
}

int Stack::getLengthSecond(int array[], int size) {
	int stackLength = 1;
	for (int i = size / 2; i < size - 1; i++) {
		stackLength++;
	}
	return stackLength;
}

void Stack::doubleArraySize(){
	
}
