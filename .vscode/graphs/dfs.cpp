#include<iostream>
#include<vector>
 
using namespace std;

 class solution{
  private:
  void dfs(int node, vector<int> adj[], int vis[], vector<int> df){
     vis[node]=1;
     df.push_back(node);
     for (auto i : adj[node])
     {
        if (!vis[i])
        {
           dfs(i, adj, vis, df); /* code */
        }
        
     }
     

  }

  public: 
  vector<int> graphOfDfs(int V, vector<int> adj[]){
    int vis[V]={0};
    int start=0;
    vector<int> df;
    dfs(start, adj, vis, df);
    return df;
  }
 };

int main(){

 
 return 0;
}