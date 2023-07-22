<<<<<<< HEAD
#include<iostream>
#include<vector>
 
using namespace std;

int solve(vector<int>num, int n){
    if (n<0)
    {
        return 0;
    }
    if (n==0)
    {
        return num[0];
    }
    int include=solve(num, n-2)+num[n];
    int exclude=solve(num, n-1)+0;

    return max(include, exclude);
    
    
}

//recursion + memorisation

int solve(vector<int>num, int n, vector<int>dp){
    if (n<0)
    {
       return 0;
    }
    if (n==0)
    {
        return num[0];

    }
    if (dp[n]!=-1)
    {
        return dp[n];
    }
    
    int include=solve(num, n-2, dp)+num[n];
    int exclude=solve(num, n-1, dp)+0;
     dp[n]= max(include, exclude);
     return dp[n];
    
}

//tabulation

int solveTab(vector<int> nums, int n){
    n=nums.size();
    vector<int>dp(n, 0);

    dp[0]=nums[0];

    //1 se leke n tak for loop
    for (int i = 1; i < n; i++)
    {
        int include=dp[i-2]+nums[i];
        int exclude=dp[i-1]+0;
        dp[i]=max(include, exclude);
    }

    return dp[n-1];
    
}



int maxsum(vector<int> nums){
int ans= solve(nums, nums.size()-1);
vector<int> dp(nums.size(), -1);

return solveTab(nums, nums.size());
}
 
=======
#include<iostream>
#include<vector>
 
using namespace std;

int solve(vector<int>num, int n){
    if (n<0)
    {
        return 0;
    }
    if (n==0)
    {
        return num[0];
    }
    int include=solve(num, n-2)+num[n];
    int exclude=solve(num, n-1)+0;

    return max(include, exclude);
    
    
}

//recursion + memorisation

int solve(vector<int>num, int n, vector<int>dp){
    if (n<0)
    {
       return 0;
    }
    if (n==0)
    {
        return num[0];

    }
    if (dp[n]!=-1)
    {
        return dp[n];
    }
    
    int include=solve(num, n-2, dp)+num[n];
    int exclude=solve(num, n-1, dp)+0;
     dp[n]= max(include, exclude);
     return dp[n];
    
}

//tabulation

int solveTab(vector<int> nums, int n){
    n=nums.size();
    vector<int>dp(n, 0);

    dp[0]=nums[0];

    //1 se leke n tak for loop
    for (int i = 1; i < n; i++)
    {
        int include=dp[i-2]+nums[i];
        int exclude=dp[i-1]+0;
        dp[i]=max(include, exclude);
    }

    return dp[n-1];
    
}



int maxsum(vector<int> nums){
int ans= solve(nums, nums.size()-1);
vector<int> dp(nums.size(), -1);

return solveTab(nums, nums.size());
}
 
>>>>>>> 5e4bf5a38e694a29ae414b8c74d2854fcc5b0101
