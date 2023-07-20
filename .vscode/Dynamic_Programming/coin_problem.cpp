#include <iostream>
#include <vector>

using namespace std;

int Coin(vector<int> num, int x)
{
    if (x == 0)
    {
        return 0;
    }
    int mini = INT_MAX;
    if (x < 0)
    {
        return INT_MAX;
    }
    for (int i = 0; i < num.size(); i++)
    {
        int ans = Coin(num, x - num[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    return mini;
}

int solveMem(vector<int> num, int x)
{
    vector<int> dp(x + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; i < num.size(); j++)
        {
            if (i - num[j] && dp[i - num[j]] != INT_MAX)
            {
                dp[i] = min(dp[i], 1 + dp[i - num[j]]);
            }
        }
    }
    if (dp[x] == INT_MAX)
    {
        return -1;
    }
    return dp[x];
}

int main()
{

    return 0;
}