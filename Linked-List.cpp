#include "bits/stdc++.h"
// #include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node(int x){		
		data = x;
		next = NULL;
	}
};

class LinkedList
{
public:
	Node* head;

	LinkedList(){
		head = NULL;
	}

	void insertFront(int x){
		Node* temp = new Node(x);
		temp -> next = head;
		head = temp;
	};
	void insertEnd(int x){
		Node* end = new Node(x);
		if (head == NULL){
			head = end;
			return;
		}
		Node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = end;

	};
	// void insertPosition(int pos,int x){
	// 	Node* temp = new Node(x);
	// 	if(pos==0){
	// 		temp ->next = head;
	// 		head = temp;
	// 		return;
	// 	}
	// 	Node* cnt = head;
	// 	Node* var = head;
	// 	int count = pos-1;
	// 	for(int i = 1; i < pos; i++){
	// 		cnt = cnt->next;
	// 	}
	// 	while(--count){
	// 		var = var->next;
	// 	}
	// 	temp->next = cnt;
	// 	var->next=temp;

	// };
	void deleteFront(){
		Node* temp = head;
		Node* del = head;
		temp = temp->next;
		head = temp;
		delete del;
		del = NULL;

	};
	void deleteLast(){
		Node* temp = head;
		Node* cnt = NULL;
		while(temp->next!=NULL){
			cnt = temp;
			temp = temp->next;
		}
		delete temp;
		cnt -> next = NULL;

	};
	// void deletePosition(int pos);

	bool search(int key){
		Node* temp = head;
		while(temp!=NULL){
			if(temp->data==key){
				return true;
			}
			temp = temp->next;
		}
		return false;
	};
	int length(){
		int count = 0;
		Node* temp = head;
		while(temp != NULL){
			count++;
			temp = temp->next;
		}
		return count;
	};



	void display(){
		Node* temp = head;
		while(temp != NULL){
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout<<endl;
	};




};






int main(){
  LinkedList first;
  first.insertFront(4);
  first.insertFront(5);
  first.insertFront(48);
  first.insertEnd(7);
  first.insertEnd(13);
  first.display();
  // cout<<endl;
  // first.insertPosition(1,9);
  // first.insertPosition(4,2);
  first.display();
  first.deleteFront();
  // cout<<endl;
  first.display();
  first.deleteLast();
  // cout << endl;
  first.display();
  // cout<< endl;
  cout << first.search(5)<<endl;
  cout<<first.length()<<endl;



  // first.display();



  return 0;
}
