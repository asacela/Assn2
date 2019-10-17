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

	if (firstCapacity < (size / 2)) {

		for(int i = 0; i < size / 2; ++i){
			array[i+1] = array[i];
		}

		array[0] = data;


		firstCapacity++;
	}
	else{

		doubleArraySize();

		for(int i = 0; i < size / 2; ++i){
			array[i+1] = array[i];
		}

		array[0] = data;


		firstCapacity++;
	}

}

void Stack::pushSecond(int data) {

	if (secondCapacity < (size / 2)) {

		for(int i = size / 2; i < size; ++i){
			array[i+1] = array[i];
		}

		array[0] = data;


		secondCapacity++;
	}
	else{

		doubleArraySize();

		for(int i = size / 2; i < size; ++i){
			array[i+1] = array[i];
		}

		array[0] = data;


		secondCapacity++;
	}
}

void Stack::popFirst() {

	for(int i = (size / 2) -; i >= 0; --i){

		array[i - 1]
	}

	firstCapacity--;
}

void Stack::popSecond() {
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
	int new_size = size * 2;
	int *temp = new int [new_size];

	for(int i = 0; i < size; ++i){

		temp[i] = array[i];

	}

	array = temp;
	delete[] temp;


	
}
