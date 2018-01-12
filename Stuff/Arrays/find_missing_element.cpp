#include <iostream>
#include <algorithm>

using namespace std;

int finder(int *arr1, int *arr2){
	int n1,n2;
	n1=sizeof(arr1)/sizeof(arr1[0]);
	n2=sizeof(arr2)/sizeof(arr2[0]);
	sort(arr1,arr1+n1);
	sort(arr2,arr2+n2);

	for(int i=0 ; i<max(n1,n2) ; i++){
		if(i==max(n1,n2)-1){
			return arr1[i];
		}
		if(arr1[i]!=arr2[i]){
			return arr1[i];
		}
	}
	return 0;
}

int main(){
	int *arr1=new int[1,2,3,4,5,6,7,8];
	int *arr2=new int[3,2,4,8,6,7,1];
	cout<<finder(arr1,arr2);
	return 0;
}


///// NOT WORKING WELL ////////////////////