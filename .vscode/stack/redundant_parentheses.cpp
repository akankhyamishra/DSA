#include<iostream>
#include<stack>
 
using namespace std;

bool parenthese(string s){
    stack<char> st;
    bool ans=false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
           st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if (st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                st.pop();
            }
            else if(st.top()=='('){
                st.pop();
                ans = true ;
                cout<<"found "<<endl;
            }
            
        }
    }
    return ans;
}
 
int main(){

    string s="(a+b))";
    parenthese(s);


 
 return 0;
}
