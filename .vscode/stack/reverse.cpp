#include<iostream>
#include<stack>
 
using namespace std;

string reverse(string str){
    
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        char ch=str[i];
        st.push(ch);
    }

    string ans=" ";
    while (!st.empty())
    {
        char ch=st.top();
        ans.push_back(ch);
        st.pop();

    }
    cout<<"answer is: "<<ans<<endl; 
    
    
}

int main(){
     string str="hello";
    reverse(str);

 
 return 0;
}