#include<iostream>
 
using namespace std;
 

void printArray(int arr[]){
    
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i];
    }
    
}
 int main(){
    int arr[5]={6,7,8,9,40};
    cout<<"Array elements:"<<endl;
    printArray(arr);

 return 0;
}