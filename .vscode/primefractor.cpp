#include<iostream>
 
using namespace std;
 
void primeFactor(int n){
    int arr[100]={0};
    for (int i = 2; i <= n; i++)
    {
        arr[i]=i;
    }
    for (int i = 2; i <=n ; i++)
    {
       if (arr[i]==i)
       {
        for (int j = i*i; i <=n; j+=i)
        {
            if (arr[j]==j)
            {
               arr[j]==i;
            }
            
        }
        
       }
       
    }
    while (n!=1)
    {
        cout<<arr[n]<<endl;
        n=n/arr[n];
    }
    
    
    
}
int main(){
    int n;
    cin>>n;

 primeFactor(n );
 return 0;
}