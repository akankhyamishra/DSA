#include<iostream>
#include<vector>

using namespace std;
 
 vector<vector<int>> ans;
 void permute(vector<int> &a, int n){
    if(n==a.size()){
       ans.push_back(a);
       return ;
    }
  for (int i = n; i < a.size() ; i++)
  {
    swap(a[i],a[n]);
    permute(a,n+1);
    swap(a[i],a[n]);
  }
  return ;
    
 } 
int main(){

 int n;
 cin>>n;
 vector<int> a(n);
 permute(a,0);
for (auto &i : a)
{
    cin>>i;
}
for (auto v : ans)
{
    for (auto i : v)
    {
        cout<<i<<" ";
    }
    
}
 return 0;
}