#include<iostream>
#include<algorithm>
#include<string>
 
using namespace std;
 
 string reverseWord(string s){
    string ans=" ";
    string temp=" ";

    for (int i = s.size()-1; i >= 0; i--)
    {
        if (s[i]=='.')
        {
            reverse(temp.begin(), temp.end());
            ans+=temp;
            ans.push_back('.');
            temp="";
        }
        else{
            temp.push_back(s[i]);
        }
        //reverse first word
        reverse(temp.begin(), temp.end());
        ans+=temp;
        return ans;
        
    }
    
 }
int main(){

 
 return 0;
}