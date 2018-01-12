#ifndef __Stack_H_INCLUDED__
#define __Stack_H_INCLUDED__

class Stack {

	private:
		char items[50];
		int top;
		
	public:
		Stack();
		bool isEmpty();
		void push(char);
		void pop();
		char peek();
		int size();
};

#endif 