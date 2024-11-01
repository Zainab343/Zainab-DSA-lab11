#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
	
};
class linkedList{
	public:
		node *rear;
		node *front;
		
		linkedList(){
			rear=NULL;
			front=NULL;
		}
		bool isEmpty(){
			if(front==NULL){
				return true;
			}
			else
			return false;
	
	}
	void enqueue(int n){
		node *temp=new node();
		temp->data=n;

		if(isEmpty()){
		front=rear=temp;
		temp->next=front;	
		}
		else{
			rear->next=temp;
			rear=temp;
			rear->next=front;
		}
	}
	void dequeue(){
		if(isEmpty()){
			cout<<"Queue underflow "<<endl;
			return;
		}
		node *ptr=front;
		if(front==rear){
			front=rear=NULL;
		}
		else{
		front=front->next;
		rear->next=front;
		
	}
	delete ptr;
	}
	void display(){
		if(isEmpty()){
				cout<<"List is empty "<<endl;
		return;
		}
		else{
			node *temp=front;
			cout<<"The elements are "<<endl;
			do{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
			while(temp!=front);
		}
	}
};
int main(){
	linkedList l1;
	l1.enqueue(23);
	l1.enqueue(45);
	l1.enqueue(56);
	l1.display();
	l1.dequeue();
	l1.display();


}