#include<iostream>
using namespace std;
const int size=5;
class array{
	public:
	int front;
	int rear;
	int count;
	int arr[size];
	array(){
		front=0;
		rear=0;
		count=0;
	}
	void enque(int n){
		if(!isfull()){
			arr[rear]=n;
			rear=(rear+1)%size; 
			count++;
		}
		else {
			return;
		}
	}
	bool isfull(){
		if(count==size){
			return true;
		}
		else{
			return false;
		}
	}
	bool isEmpty(){
		if(count==0){
			return true;
		}
		else
		{
			return false;
		}
	}
	void dequeue(){
		if(!isEmpty()){
			front=(front+1)%size;
			count--;
		}
		else{
			cout<<"Array is empty "<<endl;
			return;
		}
	}
	void display(){
		if(isEmpty()){
			cout<<"array is empty"<<endl;
		}
		else{
			int index = front;
			cout<<"The elements are: "<<endl;
			for(int i=1;i<=count;i++){
				cout<<arr[index]<<endl;
				index=(index+1)%size;
			}
		}
	}
	
};
int main(){
	array a1;
	a1.enque(23);
	a1.enque(43);
	a1.enque(45);
	a1.display();
	a1.dequeue();
	a1.display();
	
}
