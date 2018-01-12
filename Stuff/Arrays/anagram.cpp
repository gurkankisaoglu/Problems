#include <iostream>
#include <string>
#include <map>

using namespace std;

bool isAnagram(string str1, string str2){

	map<char, int> map;

	for(int i=0 ; i<str1.size() ; i++){
		if(str1[i]==' ') continue;
		else if( str1[i]<91 ) str1[i]=str1[i]+32; 
		map[str1[i]]++;
	}
	for(int i=0 ; i<str2.size() ; i++){
		if(str2[i]==' ') continue;
		else if( str2[i]<91 ) str2[i]=str2[i]+32; 
		map[str2[i]]--;
	}
	for(int i=0 ; i<map.size() ; i++){
		if(map[i]!=0) return false;
	}

	return true;

}

int main(){
	
	string str1,str2;
	
	getline(cin,str1);
	getline(cin,str2);

	cout << isAnagram(str1,str2);

	return 0;
}