#include <iostream>
#include "Stack.h"

using namespace std;

bool balance_check(string str){
	if(str.size()%2!=0){
		return false;
	}

	Stack stack;
	for(int i=0 ; i<str.size() ; i++){
		if(str[i]=='{' || str[i]=='['  || str[i]=='('){
			stack.push(str[i]);
		}
		if(str[i]==')' && stack.peek()=='(') stack.pop();
		if(str[i]==']' && stack.peek()=='[') stack.pop();
		if(str[i]=='}' && stack.peek()=='{') stack.pop();
	}
	if(stack.isEmpty()) return true;
	return false;
}
int main(){
	string str;
	cin>>str;
	cout<<balance_check(str);
	return 0;
}