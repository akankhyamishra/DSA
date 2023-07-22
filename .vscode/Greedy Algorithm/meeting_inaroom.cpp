#include<iostream>
#include<vector>
#include<bits/stdc++.h>

 
using namespace std;

class solution{
    public:

    bool compare(pair<int, int>p, pair<int, int>q){
        (p.first>q.first)? true:false;
    }

   int maxMeeting(int start[], int end[], int n){
    vector<pair<int,int> >v;

    for (int i = 0; i < n; i++)
    {
        pair<int,int>p= make_pair(start[i], end[i]);
        v.push_back(p);
    }
    sort(v.begin(), v.end(), compare);
    int count=1;
    int ansEnd=v[0].second;

    for (int i = 1; i < n; i++)
    {
        if (v[i].second>ansEnd)
        {
            count++;
            ansEnd=v[i].second;
        }
        
    }
     return count;   
   }
};
 
int main(){

 
 return 0;
}