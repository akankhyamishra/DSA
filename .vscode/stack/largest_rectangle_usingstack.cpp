#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int maxArea(vector<int> a)
{
    int ans = 0, i = 0;
    stack<int> st;

    while (i < a.size())
    {
        while (!st.empty() && a[st.top()] > a[i])
        {
            int t = st.top();
            int h = a[t];
            st.pop();
            if (st.empty())
            {
                ans = max(ans, h * i);
            }
            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, h * len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int main()
{

    return 0;
}