#include<iostream>
 
using namespace std;

bool valid(char c){
    if ((c>='a' && c<='z' ) || (c>='A' && c<='Z')) 
    {
        return 1;
    }
    return 0;
    
}

char toLower(char c){
    if (c>='a' && c<='z' )
    {
        return c;
    }
    else{
        char temp = c-'A'+'a';
        return temp;
    }
    
}

bool ispalindrome(string s, int st, int e){
st=0;
e=s.size()-1;
while (st<=e)
{
    if (s[st]!=s[e])
    {
        return false;
    }
    else{
        st++;
        e--;
    }
    
}

}

string checkPalindrome(string s){
    string temp=" ";
    for (int j = 0; j < s.size(); j++)
    {
       if (valid(s[j]))
       {
        temp.push_back(s[j]);
       }
       
    }
    for (int j = 0; j < s.size(); j++)
    {
        temp[j]=tolower(temp[j]);
    }
    
   return checkPalindrome(temp); 
}
 

int main(){

 
 return 0;
}