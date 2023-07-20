#include<iostream>
#include<queue>
#include<stack>
 
using namespace std;

void interleave(queue<int> &q){
    stack<int> st;
    if(q.size()%2!=0){
        cout<<"even queue"<<endl;
    }
    else{
        cout<<"odd queue"<<endl;
    }
    for (int i = 0; i < (q.size())/2; i++)
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < (q.size())/2; i++)
    {
        st.push(q.front());
        q.pop();
    }
     while (!st.empty())
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    
    
    
}
 
int main(){

    queue<int> q;
    q.push(12);
    q.push(14);
    q.push(8);
    q.push(1);
    q.push(23);
    q.push(65);
   

    interleave(q);
    for (int i = 0; i < q.size(); i++)
    {
        cout<<" "<<q.front()<<" ";
        q.pop();
    }
    

 
 return 0;
}