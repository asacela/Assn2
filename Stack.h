#ifndef STACK_H_
#define STACK_H_

class Stack {

private:
	int size;
	int *array;
	int firstSize;
	int secondSize;
	void doubleArraySize();
public:
		Stack();
		~Stack();
		void pushFirst(int data);
		void pushSecond(int data);
		void popFirst();
		void popSecond();
		int peekFirst();
		int peekSecond();
		bool isEmptyFirst();
		bool isEmptySecond();
		int getLengthFirst();
		int getLengthSecond();
		void printFirst();
		void printSecond();
};

#endif
