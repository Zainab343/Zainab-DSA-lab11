#include<iostream>
using namespace std;
int sumArray(int arr[],int size){
	 if (size<=0) {
        return 0;
    }
     return arr[size-1] + sumArray(arr,size-1);
}
int main(){
    int arr[]={1,2,3,4,6};
  int size = sizeof(arr) / sizeof(arr[0]);         //calculates size 
    int sum = sumArray(arr,size);
    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}
