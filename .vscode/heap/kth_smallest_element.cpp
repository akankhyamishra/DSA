#include<iostream>
#include<queue>
 
using namespace std;
 
 int kthSmallest(int arr[], int l, int r, int k){
    priority_queue<int> q;

    for (int i = 0; i < k; i++)
    {
        q.push(arr[i]);
    }

    for (int i = r; i < k; i++)
    {
        if (arr[i]<q.top())
        {
            q.pop();
            q.push(arr[i]);
        }
        
    }
    int ans=q.top();
    return ans;
     
 }
int main(){

 
 return 0;
}