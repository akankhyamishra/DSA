#include<iostream>
#include<stack>
 
using namespace std;

void insertatBottom(stack<int>s, int num){
stack<int> temp;
while(!s.empty()){
temp.push(s.top());
s.pop();
}
s.push(num);
while(!temp.empty()){
    s.push(temp.top());
    temp.pop();
}
while (!s.empty())
{
    cout<<s.top();
    s.pop();
}


}

void reverse(stack<int> s){
    if (!s.empty())
    {
       return ;
    }
    int num=s.top();
    s.pop();

    reverse(s);
    insertatBottom(s,num);
    
}
 
int main(){

    stack<int> s;
    s.push(3);
    s.push(6);
    s.push(7);
    s.push(9);
    s.push(5);
    
    reverse(s);
 
 return 0;
}