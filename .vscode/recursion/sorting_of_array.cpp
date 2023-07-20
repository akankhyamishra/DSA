#include<iostream>
 
using namespace std;

bool sorted( int arr[], int p){
    if(p==1){
        return 1;
    }
    bool restarray=sorted(arr+1,p-1);
    if(arr[0]<arr[1] && restarray ){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
 int arr[]={1,2,7,4,9,7};
 int p=5;
 cout<<sorted(arr,p);
 
 return 0;
}