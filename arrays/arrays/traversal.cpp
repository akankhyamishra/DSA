#include<iostream>
 
using namespace std;
 
int main(){
int arr[]= {20, 50, 35, 56};
arr[3]=7;

cout<<"array traversal:";
for(int i=0; i<4; i++){
    cout<<arr[i]<<endl;
}
 
 return 0;
}