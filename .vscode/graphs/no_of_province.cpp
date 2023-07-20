#include <iostream>
#include <vector>

using namespace std;
class solution
{
private:
    int dfs(int node, vector<int> adjls[], int vis[])
    {
        vis[node] = 1;
        for (auto i : adjls[node])
        {
            if (!vis[i])
            {
                dfs(i, adjls, vis);
            }
        }
    }

public:
    int numProvinces(vector<vector<int>> adj, int V)
    {
        vector<int> adjls[V];
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; i < V; j++)
            {
                adjls[i].push_back(j);
                adjls[j].push_back(i);
            }
        }
        int vis[V] = {0};
        int start = 0;
        for (int i = 0; i < V; i++)
        {
            !vis[i] ? dfs(i, adjls, vis), start++ : vis[i] = 1;
        }
        return start;
    }
};

int main()
{

    return 0;
}