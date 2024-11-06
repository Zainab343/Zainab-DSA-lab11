#include<iostream>
using namespace std;
bool linear_search(int numbers[], int number){
	int n=sizeof(numbers);
	  for (int i=0;i<n;i++)
        {
            if(numbers[i]==number)
                return true;    
				    }
        return false;   
}
int main(){
	 int numbers[]={13579,26791,26792, 33445,55555,62483,77777,79422,85647,93121};
        int Number;
    cout<<"Enter the winning 5-digit number: ";
    cin>>Number;
    
        if(linear_search(numbers,Number)){
        cout<<"congratulatins! you have the won with the number  "<<Number<<endl;
    }
    else
    cout<<"Sorryy! good luck for next time "<<endl;
    return 0;
}