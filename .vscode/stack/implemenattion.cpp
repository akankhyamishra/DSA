#include<iostream>
 
using namespace std;

#define n 100

class stack{
    int*arr;
    int top;

    public:
    stack(){
        arr = new int[n]; 
        top=-1;
    }

    void push(int x){
        if (top==n-1)
        {
            cout<<"stack overflow"<<endl;
            return ;
        }
        top++;
        top=arr[x];
        
    }

    void pop(int x){
        if (top==-1)
        {
            cout<<"stack is empty"<<endl;
            return ;
        }
        top--;
        
    }
    int returnTop(){
        if(top==-1){
            cout<<"stack is empty";
            return -1;
        }
       return arr[top];
    }

    bool empty(){
        return top==-1;
    }
    
};
 
int main(){

 stack stk;
 stk.push(2);
 stk.push(3);
 stk.push(6);
 stk.push(8);
 cout<<stk.returnTop()<<" ";
  stk.pop(8);
 return 0;
}