#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int x) {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertFront(int x) {
        Node* newNode = new Node(x);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void insertEnd(int x) {
        Node* newNode = new Node(x);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteNode(int x) {
        if (head == nullptr) {
            cout << "List is empty lol...\n";
            return;
        }

        Node* temp = head;

        while (temp != nullptr && temp->data != x) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Node not found.. bad coding..\n";
            return;
        }

        if (temp == head) {
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
            delete temp;
            return;
        }

        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }

        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;
        }

        delete temp;
    }

    void reverseDLL() {
        Node* temp = nullptr;
        Node* current = head;

        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp != nullptr) {
            head = temp->prev;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(){
DoublyLinkedList dll;

    dll.insertFront(10);
    dll.insertFront(5);

    dll.display();

    dll.insertEnd(20);
    dll.insertEnd(30);

    dll.display();

    dll.deleteNode(20);

    dll.display();

    dll.reverseDLL();

    dll.display();

    dll.display();

    return 0;
}