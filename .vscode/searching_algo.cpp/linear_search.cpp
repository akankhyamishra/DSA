#include<iostream>
 
using namespace std;

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            return i;
        }
        
    }
    cout<<"not found"<<endl;
    return -1;
    
}
 
int main(){

    int arr[]={5, 6, 7, 2, 12, 34};
    int key= 5;
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<linearSearch(arr, n, key);

 
 return 0;
}