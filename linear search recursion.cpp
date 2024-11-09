#include <iostream>
using namespace std;

int linear_search(int arr[],int n,int x,int index=0) {
    if(index>=n){
        return -1; 
    }
    if (arr[index]==x) {
        return index;
    }
        return linear_search(arr,n,x,index+1);
}

int main() {
    int arr[]={2, 5, 6, 7, 4};
    int x=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=linear_search(arr, n, x);
    if(result!=-1){
        cout<<"The number "<<x<<" is found at the index "<<result<<endl;
    } else {
        cout<<"The number "<<x<<" is not found in the array."<<endl;
    }
    return 0;
}