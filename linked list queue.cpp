#include <iostream>
using namespace std;

class Node {
	public:
    int data;
    Node* next;
};
class linkedList{
	public:
Node* front = NULL;
Node* rear = NULL;

void enqueue(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    
    if (rear == NULL) {  
        front = rear = newNode;
        return;
    }
    
    rear->next = newNode;
    rear = newNode;
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue is Empty" << endl;
        return;
    }
    
    Node* temp = front;
    cout << "Dequeue: " << front->data << endl;
    front = front->next;

    if (front == NULL) {  
        rear = NULL;
    }

    delete temp;
}

void empty() {
    if (front == NULL) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue is not Empty" << endl;
    }
}

void display() {
    if (front == NULL) {
        cout << "Queue is Empty" << endl;
        return;
    }
    
    Node* temp = front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
};
int main() {
	linkedList l1;
	
    l1.enqueue(78);
    l1.display();
    
    l1.enqueue(90);
    l1.display();
    
    l1.enqueue(34);
    l1.display();
    
    l1.dequeue();
    l1.display();
    
    l1.empty();
    
    return 0;
}