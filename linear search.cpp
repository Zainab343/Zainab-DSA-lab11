#include<iostream>
using namespace std;
int linear_search(int arr[], int x){
	int n=sizeof(arr);
	  for (int i=0;i<n;i++)
        {
            if(arr[i]==x)
                return i;    
				    }
        return -1;   
}
int main(){
	 int arr[]={2,5,6,7,4 };
        int x=7;
        int n=linear_search(arr,x);
        cout<<"the number "<<x<<"is found at the index  "<<n<<endl;
}