#include<iostream>
#include<string>
 
using namespace std;
 
 void toh(int n, char src, char des, char h){
    if(n==0){
        return;
    }
    toh(n-1, src, h, des);
    cout<<"move from "<<src<<"to "<<des<<endl;
    toh(n-1, src, des, h);
    
 }
int main(){

toh(4,'A','B','C');
 
 return 0;
}