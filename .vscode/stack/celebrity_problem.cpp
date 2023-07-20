#include<iostream>
#include<stack>
#include<vector>
 
using namespace std;

bool knows(vector<vector<int> >M, int a, int b){
    if (M[a][b]==1)
    {
        return true;
    }
    else{
        return false;
    }
    
}

int celebrity(vector<vector<int> >M, int n){
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }
    while (s.size()>1)
    {
        int a=s.top();
        s.pop();

        int b=s.top();
        s.pop();

        if (knows(M,a,b))
        {
            s.push(b);
        }
        else{
            s.push(a);
        }
        
    }

    int ans=s.top();
    
    
    int rowCount=0;
    for (int i = 0; i < n; i++)
    {
        if (M[i][ans]==0)
        {
            rowCount++;
        }
        
    }
    if (rowCount!=n)
    {
        return -1;
    }
    
    int colCount=0;;
    for (int i = 0; i < n; i++)
    {
        if (M[ans][i]==1)
        {
            colCount++;
        }
        
    }
    if (colCount==n)
    {
        return 1;
    }
    
    return ans;
    

    
    
    
}
 
int main(){

 
 return 0;
}