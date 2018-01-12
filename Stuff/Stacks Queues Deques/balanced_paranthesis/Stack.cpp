#include "Stack.h"


void Stack::push(char c){

	top++;
	items[top]=c;

}


Stack::Stack() top=-1;

bool Stack::isEmpty() return top==-1;

void Stack::pop() top--;

char Stack::peek() return items[top];

int Stack::size() return top+1;