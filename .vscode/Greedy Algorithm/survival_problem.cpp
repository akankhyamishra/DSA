#include<iostream>
 
using namespace std;

/*
n- food per day
s-days to survive
m-food per day to survive
*/

int minimumDay(int n, int s, int m){
    int sunday = s/7;
    int remainingDays= s-sunday;
    int totalFood=s*n;

    int ans=0;
    
    if (totalFood%n==0)
    {
        ans=totalFood/n;
    }
    else{
        ans=totalFood/n+1;
    }
    if (ans<=remainingDays)
    {
        return ans;
    }
    else{
        return -1;
    }
    
}
 
