#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
string str= "sdchgsbdcjshbbb";

int freq[34];

for (int i = 0; i < 34; i++)
{
    freq[i]=0;
}
for (int i = 0; i < str.length(); i++)
{
    freq[str[i]-'a'];
}
int maxF=0;
char ans='a';

for (int i = 0; i < 34; i++)
{
    if (freq[i]>maxF)
    {
        maxF=freq[i];
        ans=i+'a';
    }
    
}

cout<<maxF<<" "<<ans<<endl;

 
 return 0;
}