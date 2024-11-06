#include<iostream>
using namespace std;

int binary_search(	int arr[],int l,int r,int x){
	if(l<=r){
	int mid=(l+r)/2;
	if(arr[mid]==x){
		return mid;
	}
	else if(arr[mid]>x){
		return binary_search(arr,l,mid-1,x);
	}
	else{
		return binary_search(arr,mid+1,r,x);
	}
	
}
}
int main(){
	int arr[]={1,2,3,4,5};
	cout<<binary_search(arr,0,4,4)<<endl;
}