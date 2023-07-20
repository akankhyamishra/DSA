#include<iostream>
 
using namespace std;
 
int main(){
int n;

cin>>n;

int i=1;

// while (i<=n)
// {
//     int j=1;
//     while (j<=i )
//     {
//         char ch= 'A'+n-i;
//         cout<<ch<<" ";
//         ch=ch+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

//star

while(i<=n){
    int j=n-i;
    while(j){
        cout<<" ";
        j=j-1;
    }
    int col=1;
    while (col<=i)
    {
        cout<<"*"<<" ";
        col=col+1;
    }
    cout<<endl;
    i=i+1;
    
}

 
 return 0;
}