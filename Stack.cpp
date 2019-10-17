#include <iostream>
using namespace std;

#include "Stack.h"

Stack::Stack() {}

void Stack::pushFirst(int array[], int size, int data) {
	array[0] = data;
}

void Stack::pushSecond(int array[], int size, int data) {
	array[size / 2] = data;
}

int Stack::popFirst(int array[], int size) {
	return array[0];
}

int Stack::popSecond(int array[], int size) {
	return array[size / 2];
}

int Stack::peekFirst(int array[], int size) {
	return array[0];
}

int Stack::peekSecond(int array[], int size) {
	return array[size / 2];
}

bool Stack::isEmptyFirst(int capacity) {
	if (capacity == 0) {
		return true;
	} else {
		return false;
	}
}

bool Stack::isEmptySecond(int capacity) {
	if (capacity == 0) {
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
