#include<iostream>
#include<queue> 
#include<stack> 
using namespace std;

queue<int> rev(queue<int> q){
    stack<int> st;

    while(!q.empty()) {
     int ele=q.front();
     q.pop();
     st.push(ele);
    }
    while (!st.empty())
    {
        int ele=st.top();
        st.pop();
        q.push(ele);
        
    }
    return q; 
    
}
 
int main(){

 
 return 0;
}