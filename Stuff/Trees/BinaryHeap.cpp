#include <iostream>

using namespace std;

class BinHeap{
	private:
		int heapList[];
		int size;
	public:
		BinHeap(){
			heapList[0]=0;
			size=0;
		}
		void insert(int i);
		void percUp(int size);


};
void BinHeap::percUp(int size){
	while(size/2 > 0){
		if (heapList[size] < heapList[size/2]){
			int tmp=heapList[size/2];
			heapList[size/2]=heapList[size];
			heapList[size]=tmp;
		}
		size=size/2;
	}
}

void BinHeap::insert(int i){
	size++;
	heapList[size]=i;
	percUp(size);
}







int main(){

	return 0;
}