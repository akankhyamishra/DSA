#include<iostream>
#include<stack>
 
using namespace std;
 
 void out(stack<int>input, int count){
    if (count=input.size()/2)
    {
        input.pop();
        return;
    }
    int num=input.top();
    input.pop();

    out(input, count+1);
    input.push(num);
 }
 void deleteMiddle(stack<int>input){
    int count=0;
    out(input, count);
    return ;
 }
