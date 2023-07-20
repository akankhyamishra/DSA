#include<iostream>
#include<string>
 
using namespace std;
 
 string removeDup(string s){
    if (s.length()==0){
        return " ";
    }
    char a=s[0];
    string res=removeDup(s.substr(1));
    if (a==res[0])
    {
        return res;
    }
    else{
        return a+res;
    }
    
    
 }
int main(){

string s="aaaahhhhtuurgcccciiiii";
cout<<removeDup(s);
 
 return 0;
}