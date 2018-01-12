#include <iostream>
#include <string>

using namespace std;

int main(){

	string sentence;
	getline(cin,sentence);

	string str="";
	int i=0;

	while(i<sentence.size()){

		if(sentence[i]!=' '){
			
			int word_start=i;

			while(i<sentence.size() && sentence[i]!=' '){
				i++;
			}

			string substring=sentence.substr(word_start,i-word_start);

			if(str==""){
				str.insert(0,substring);
				continue;
			}

			str.insert(0,substring+" ");

		}
		i++;
	}

	cout << str;

	return 0;
}