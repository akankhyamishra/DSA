#include <iostream>
#include <stack>

using namespace std;

bool parenthesis(string s)
{
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && s[i] == '}' && st.top() == '{')
            {
                char top = st.top();
                st.pop();
            }
            else if (!st.empty() && s[i] == ')' && st.top() == '(')
            {
                char top = st.top();
                st.pop();
            }
            else if (!st.empty() && s[i] == ']' && st.top() == '[')
            {
                char top = st.top();
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    string s = "[](){}";
    cout<<parenthesis(s);

    return 0;
}