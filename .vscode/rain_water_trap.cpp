#include<iostream>
#include<vector>
#include<stack>
 
using namespace std;
 
 int rain_water(vector<int> a){
    int ans=0; 
    stack<int> st;
    for (int i = 0; i < a.size(); i++)
    {
        while (!st.empty()&&a[st.top()]<a[i])
        {
            int cur=st.top();
            st.pop();
            int diff=i-st.top()-1;
            ans+=min(a[st.top()],a[i])-a[cur];
        }
        st.push(i);
    }
    return ans;
 }
int main(){

 
 return 0;
}