#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

vector<int> candyStore(int candies[], int n, int k){

    sort(candies, candies+n);
    int mini=0;
    int buy=0;
    int free=n-1;

    while (buy<=free)
    {
        //cost
        mini+=candies[buy];
        buy++;
        free+=k;
    }
    int maxi=0;
    buy=n-1;
    free=0;

    while (free<=buy)
    {
        maxi+=candies[buy];
        buy--;
        free+=k;
    }
    vector<int> temp;
    temp.push_back(mini);
    temp.push_back(maxi);
    return temp;
    
    
}
 
int main(){

 
 return 0;
}