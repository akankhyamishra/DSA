#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

int getkthSum(vector<int> arr, int k){
    vector<int> ans;
    int sum=0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; i < arr.size(); j++)
        {
            sum+=arr[j];
            ans.push_back(sum);
        }
        
    }
    sort(ans.begin(), ans.end());
    return ans[ans.size()-k];
    
}
 
int main(){

 
 return 0;
}