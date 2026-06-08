#include "bits/stdc++.h"
// #include <iostream>
using namespace std;

class Queue{
	int arr [1000];
	int front = 0;
	int rear = -1;
public: 
	// methods
	void enque(int x){
		rear++;
		arr[rear]=x;
	}
	void dequeue(){

		if (front<=rear) front++;
	}
	int sz(){
		return rear-front+1;
	}
	int aage(){
		return arr[front];
	}
	int akhri(){
		return arr[rear];
	}
	bool isEmpty(){
		return rear<front;
	}
};

int main(){
	Queue q;
	q.enque(19);
	q.enque(80);
	q.enque(55);
	q.enque(94);

	q.dequeue();

	cout << "size :"<< q.sz()<< endl;
	cout << q.aage()<<endl;
	cout << q.akhri()<<endl;

	while(!q.isEmpty()){
		cout<<q.aage()<<" ";
		q.dequeue();
	}



	return 0;
}