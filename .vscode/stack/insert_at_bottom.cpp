#include<iostream>
#include<stack>
 
using namespace std;

void insert( int num){
    stack<int> st;
    stack<int> s;

    while (!st.empty())
    {
        s.push(st.top());
        st.pop();
    }
    st.push(num);

    while (!s.empty())
    {
        st.push(s.top());
        s.pop();
    }

    while (!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    
    
    
}
//recursive approach

void solve(stack<int>s, int num){
    if (s.empty())
    {
        s.push(num);
        return;
    }
    int i=s.top();
    s.pop();

    solve(s, num);
    s.push(num);
    
}
 
int main(){

    stack<int> st;
    st.push(2);
    st.push(8);
    st.push(9);
    st.push(5);
    st.push(3);

    int num =7;
    insert(num);


 
 return 0;
}

