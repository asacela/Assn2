#ifndef STACK_H_
#define STACK_H_

class Stack {

private:
	int size;
	int *array;
	int data;
	int firstSize;
	int secondSize;
	void doubleArraySize();
public:
		Stack();
		void pushFirst(int data);
		void pushSecond(int data);
		int popFirst();
		int popSecond();
		int peekFirst();
		int peekSecond();
		bool isEmptyFirst();
		bool isEmptySecond();
		int getLengthFirst();
		int getLengthSecond();
};

#endif
