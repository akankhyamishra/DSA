#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
 
using namespace std;

bool checkCycle(int node, unordered_map<int, bool>visited, unordered_map<int, bool>dfsvisited, unordered_map<int, list<int> >adj){
visited[node]=true;
dfsvisited[node]=true;

for (auto i: adj[node])
{
    if (!visited[i])
    {
        bool cyclecheck=checkCycle(i, visited, dfsvisited, adj);
        if(cyclecheck){
            return true;
        }
    }
    else if(dfsvisited[i]){
        return true;
    }
    
    
}
dfsvisited[node]=false;
return false;
 
}

int detectCycle(int n, vector<pair<int, int>>edges ){
    unordered_map<int, list<int> >adj;
     for (int i = 0; i < edges.size(); i++)
     {
        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].push_back(v);
     }
     unordered_map<int, bool>visited;
     unordered_map<int, bool>dfsvisited;

     for (int i = 0; i < n; i++)
     {
        if (!visited[i])
        {
            bool cyclefound = checkCycle(i, visited, dfsvisited, adj);
            (cyclefound)? true: false;
        }
        
     }
     
    
}
 
int main(){

 
 return 0;
}