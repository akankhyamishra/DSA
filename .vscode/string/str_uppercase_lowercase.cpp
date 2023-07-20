#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main(){
string s="RSREFSFDFH";
sort(s.begin(), s.end());
// cout<<'a'-'A'<<endl;
// for (int i = 0; i < s.length(); i++)
// {
//     if (s[i]>='A'&& s[i]<='U')
//     {
//         s[i]+=32;
//     }
    
// }
//     cout<<s;
// transform(s.begin(), s.end(), s.begin(), ::tolower);
cout<<s<<endl;
 
 return 0;
}