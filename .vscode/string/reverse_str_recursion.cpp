#include<iostream>
#include<string>
 
using namespace std;

string replaceWith(string s){
    //base case
    if (s.length()==0 || s.length()==1)
    
       return s;
    
    if (s[0]=='p' && s[1]=='i')
    {
        string output= replaceWith(s.substr(2));
        return "3.14"+output;
    }
    else{
        s[0]+replaceWith(s.substr(1));
    }
    
    
}
 
int main(){

string s= "pipppiiipi";
string r= replaceWith(s);
cout<<r<<endl;
 
 return 0;
}