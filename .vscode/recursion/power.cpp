#include<iostream>
 
using namespace std;

int power(int n, int p){
    if(p==0){
      return 1;
    }
    int prevPower=n*power(n,p-1);
    return prevPower;

}
 
int main(){
int n,p;
cin>>n>>p;
cout<<"power of "<<n<<" is: "<<power(n,p)<<endl;
 
 return 0;
}