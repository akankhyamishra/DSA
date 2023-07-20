#include<iostream>
#include<vector>
#include<stack>
 
using namespace std;

vector <int> stockSpan(vector<int> price){
    stack<pair<int,int>> s;
vector<int> ans;

for (int i = 0; i < price.size(); i++)
{
    int days=1;
    while (!s.empty()&&s.top().first<price)
    {
        days+=s.top().second;
        s.pop();
    }
    s.push_back({price,days});
    ans.push_back(days);
}


}
 
int main(){

 
 return 0;
}