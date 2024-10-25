#include<iostream>
using namespace std;
const int size=5;
class Array{
	public:
		int front;
		int rear;
		int array[size];
		Array(){
		front=0;
		rear=0;
		}
	void enque(int n){
		if(rear!=size){
			array[rear]=n;
			rear++;
		}
	else{
	return;
	}
	}
	void display(){
		if(rear!=front||rear!=0){
			cout<<"The elements are: "<<endl;
			for(int i=front;i<=rear;i++){
				cout<<array[i]<<endl;
			}
		}
		else{
			cout<<"There are no elements "<<endl;
		}
	}
	void deque(){
		if(rear!=front||rear!=0){
		 front++;	
	}
	else{
		cout<<"Array is enmpty "<<endl;
	}
}
bool isFull(){
	if(rear==size-1){
		return true;
	}
	else
	{
	//cout<<"List is empty"<<endl;
	return false;
}}
};
int main(){
	Array a1;
	a1.enque(32);
	a1.enque(45);
	a1.enque(56);
	a1.enque(67);
	cout<<a1.isFull()<<endl;
	a1.display();
	a1.deque();
	a1.display();
	a1.deque();
	a1.display();
}