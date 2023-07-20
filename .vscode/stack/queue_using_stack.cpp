#include<iostream>
#include<stack>
 
using namespace std;
 
 class queue{
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){
     s1.push(x);
    }
    void pop(){
        if (s1.empty()&&s2.empty())
        {
            cout<<"queue empty";
        }
        
    }

 };
int main(){

 
 return 0;
}