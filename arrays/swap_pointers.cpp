#include<iostream>
 
using namespace std;
 
 void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

 }
int main(){
int a=4;
int b=5;

int *aptr=&a;
int *bptr=&b;

swap(aptr,bptr);
cout<<"value of a and b: "<<a<<" "<<b;
 
 return 0;
}