#include <iostream>
#include <map>
using namespace std;

template <class T>
class Node {
    T data;
    Node* next;

  public:
    Node() {};
    void SetData(T aData) { data = aData; };
    void SetNext(Node* aNext) { next = aNext; };
    T Data() { return data; };
    Node* Next() { return next; };
};

template <class T>
class List {
    Node<T> *head;
  public:
    List() { head = NULL; };
    void Print();
    void Append(T data);
    void Delete(T data);
    Node<T>* reverse();
    T NthLastNode(int n);
    T NthLastNodeV2(int n);
    T NthLastNodeV3(int n);
    int Count(T n);
    T pop();
    void FrontBackSplit();
    void RemoveDuplicates();
    void MoveNode(List aList);
    Node<T>* ShuffleMerge(List aList);
//  CALİSMİYOR!!!!!!  Node<T>* SortedMerge(List aList);
};
/*
template <class T>
Node<T>* List<T>::SortedMerge(List aList){
	Node<T> *dummy;
	Node<T>* tail=&dummy;
	dummy->SetNext(NULL);
	while(true){
		if(aList==NULL){
			tail->SetNext(head);
			break;
		}else if(head==NULL){
			tail->SetNext(aList);
			break;
		}if(aList->Data() <= head->Data){
			MoveNode(&(tail->Next()), &aList);
		}else{
			MoveNode(&(tail->Next()), &head);
		}
		tail=tail->Next();
	}
	return dummy->Next();
}
*/

template <class T>
Node<T>* List<T>::ShuffleMerge(List aList){
	Node<T> *head2=aList.head;
	Node<T> *prev=head2;
	Node<T> *fakeHead=head;
	while(head2 && fakeHead->Next()){
		prev=head2;
		head2=head2->Next();
		prev->SetNext(fakeHead->Next());
		fakeHead->SetNext(prev);
		fakeHead=fakeHead->Next()->Next();
	}
	while(head2){
		prev=head2;
		head2=head2->Next();
		prev->SetNext(NULL);
		fakeHead->SetNext(prev);
		fakeHead=prev;
	}
	return head;
}
template <class T>
void List<T>::MoveNode(List aList){
	T data=aList.pop();
	Node<T> *newNode = new Node<T>();
	newNode->SetNext(head);	
	newNode->SetData(data);
	head=newNode;
}

template <class T>
void List<T>::RemoveDuplicates(){
	Node<T> *current=head;
	while(current){
		Node<T> *tmp=current->Next();
		while(tmp!=NULL && current->Data() == tmp->Data()) {
			Node<T> *prev=tmp;
			tmp=tmp->Next();
			delete prev;
		}
		current->SetNext(tmp);
		current=tmp;
	}
}

template <class T>
void List<T>::Print() {

    Node<T> *tmp = head;

    if ( tmp == NULL ) {
        cout << "EMPTY" << endl;
        return;
    }

    if ( tmp->Next() == NULL ) {
        cout << tmp->Data();
        cout << " --> ";
        cout << "NULL" << endl;
    }
    else {
        do {
            cout << tmp->Data();
            cout << " --> ";
            tmp = tmp->Next();
        }
        while ( tmp != NULL );

    cout << "NULL" << endl;
    }
}

template <class T>
void List<T>::FrontBackSplit(){
	Node<T> *slow,*fast,*firstHalf,*secondHalf;
	slow=head;
	fast=head->Next();
	while(fast){
		fast=fast->Next();
		if(fast){
			slow=slow->Next();
			fast=fast->Next();
		}
	}
	firstHalf=head;
	secondHalf=slow->Next();
	slow->SetNext(NULL);
}

template<class T>
T List<T>::pop(){
	Node<T>* tmp=head;
	head=head->Next();
	T returnVal=tmp->Data();
	tmp->SetNext(NULL);
	delete tmp;
	return returnVal;
}

template <class T>
int List<T>::Count(T n){
	Node<T> *tmp=head;
	int count=0;
	while(tmp){
		if(tmp->Data()==n) count++;
		tmp=tmp->Next();
	}
	return count;
}





template <class T>
void List<T>::Append(T data) {

    Node<T>* newNode = new Node<T>();
    newNode->SetData(data);
    newNode->SetNext(NULL);

    Node<T> *tmp = head;

    if ( tmp != NULL ) {
        while ( tmp->Next() != NULL ) {
            tmp = tmp->Next();
        }

        tmp->SetNext(newNode);
    }
    else {
        head = newNode;
    }
}


template <class T>
void List<T>::Delete(T data) {
    Node<T> *tmp = head;

    if ( tmp == NULL )
        return;

    if ( tmp->Next() == NULL ) {
        delete tmp;
        head = NULL;
    }
    else{
        Node<T> *prev;
        do {
            if ( tmp->Data() == data ) break;
            prev = tmp;
            tmp = tmp->Next();
        } while ( tmp != NULL );

    prev->SetNext(tmp->Next());

    delete tmp;
    }
}


template <class T>
Node<T>* List<T>::reverse(){
    if(head==NULL) return NULL;
    Node<T> *prev=NULL,*next=NULL,*current=NULL;
    current=head;
    while(current){
        next=current->Next();
        current->SetNext(prev);
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}


template <class T>
T List<T>::NthLastNode(int n){
    Node<T> *tmp=head,*res=head;
    int i=0;
    while(tmp){
        tmp=tmp->Next();
        i++;
    }
    n=i-n;
    while(n){
        res=res->Next();
        n--;
    }
    return res->Data();
}


template <class T>
T List<T>::NthLastNodeV2(int n){
    map<int,T> myMap;
    Node<T>* traversal=head;
    int i=0; 
    while(traversal){
        myMap[i]=traversal->Data();
        traversal=traversal->Next();
        i++;
    }
    return myMap[i-n];
}


template <class T>
T List<T>::NthLastNodeV3(int n){
    Node<T> *right=head,*left=head;
    while(n){
        right=right->Next();
        n--;
    }
    while(right){
        right=right->Next();
        left=left->Next();
    }
    return left->Data();

}

int main(){
    List<char> list;
    List<char> list2;
    list.Append('a');
    list.Append('z');
    list.Append('b');
    list.Append('d');
    list2.Append('f');
    list2.Append('x');
    list2.Append('i');
    list2.Append('h');
    list.Print();
    list.SortedMerge(list2);
    list.Print();


}