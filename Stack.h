#ifndef STACK_H_
#define STACK_H_

class Stack {

private: 
	int size;
public:
		Stack();
		void pushFirst(int array[], int size, int data);
		void pushSecond(int array[], int size, int data);
		int popFirst(int array[], int size);
		int popSecond(int array[], int size);
		int peekFirst(int array[], int size);
		int peekSecond(int array[], int size);
		bool isEmptyFirst(int capacity);
		bool isEmptySecond(int capacity);
		int getLengthFirst(int array[], int size);
		int getLengthSecond(int array[], int size);
};

#endif
