#include<iostream>
#include<queue>
#include<unordered_map>
 
using namespace std;

string  nonrepeating(string A){
    unordered_map<char,int> count;
    queue<int> q;

    string ans="";

    for (int i = 0; i < A.length(); i++)
    {
        char c = A[i];
        count[c]++;
        q.push(c);
    }
    while (!q.empty()){
        if (count[q.front()]>1)
        {
            q.pop();
       }
       else{
        ans.push_back(q.front());
       }
          
    }
   return ans; 
    
}
int main(){

 
 return 0;
}