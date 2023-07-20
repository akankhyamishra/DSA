#include<iostream>

using namespace std;

void firstNeg(int arr[], int n, int k){
    bool flag=false;

    for (int i = 0; i < (n-k+1); i++)
    {
       flag=false;
       for (int j = 0; i < k; i++)
       {
        if (arr[i+j]<0)
        {
            cout<<arr[i+j]<<endl;
            flag=true;
        }
        
       }
       if(!flag){
        cout<<"0"<<endl;
    }
       
    }
    
}
 
int main(){

 
 return 0;
}