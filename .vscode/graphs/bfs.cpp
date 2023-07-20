#include<iostream>
#include<vector>
#include<queue>
 
using namespace std;

class solution{
    vector<int> graphOfBfs(int V, vector<int> adj[]){
        vector<int> bfs;
        queue<int> q;
        int vis[V]={0};
        int start=0;
        q.push(0);
        while (!q.empty())
        {
            int node= q.front();
            q.pop();
            bfs.push_back(node);
            for (auto i : adj[node])
            {
                if (!vis[i])
                {
                    vis[i]=1;
                    q.push(i);
                }
                
            }
            return bfs;
            
        }
    }    

    
};
int main(){

 
 return 0;
}

/*
void PrintAdjLIst(unordered_map<int , list<int>> adjlist, vector<pair<int, int>> edges)
for(int i=0; i<edges.size(); i++){
    int u=edges[i].first;
    int v=edges[i].second;

    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
}

vois bfs(unordered_map<int,list<int>> adjlist, unordered_map<int, bool> visited, vector<int> ans, int node){
    queue<int> q;
     q.push(node);
     visited[node]=true;

     while(!q.empty()){
        int frontNode=q.front();
        q.pop();

        ans.push_back(frontNode);
    }
    //traverse
    for(auto i:adjList[frontNode]){
        if(!visited[i]){
            q.push(i);
             visited[i]=true;

        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges){
    unordered_map<int, list<int>> adjlist;
    vector<int> ans;
    unordered_map<int, bool> visted;
    printAdjLIst(adjlist, edges);

    //traverese
    for(int i=0; i<vertex; i++){
        if(!visited[i]){
            bfs(adjlist,visited,ans,i);
        }
    }
    
}
*/