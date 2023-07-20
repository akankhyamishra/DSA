#include<iostream>
 
using namespace std;
 
 int searchArray(int arr[], int n, int key){
    
    for(int i=0; i<n; i++){
       if (arr[i]==key)
       {
        return i;
       }
    
       
    }
    return -1;
    
 }
int main(){
int arr[5]={6,8,23,45,21};
int key=45;
int n= sizeof(arr)/sizeof(arr[0]);

cout<<"element found at:"<<searchArray(arr, n, key);
 
 return 0;
}