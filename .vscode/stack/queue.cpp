#include<iostream>
#include<queue>
 
using namespace std;

class queue{
    private:
    int*arr;
    int n;
    int front;
    int back;
    
    public:
    queue(){
     arr= new int[n];
     front=-1;
     back=-1;
    }

    void enqueue(int num){
    if (back == n-1)
    {
        cout<<"full"<<endl;
    }
    else  if(front == -1){
        front++;
    }
    else{
        back++;
        arr[back]=num;
    } 
    
}

void dequeue(){
    if (front == -1 || front>back)
    {
       cout<<"empty"<<endl;
    }
    front++;
   
    
}

int peek(){
    if (front==-1 || front>back)
    {
       cout<<"empty"<<endl;
    } 
    else{
        return arr[front];
    }
    
}

bool isempty(){
    if (front==-1)
        return true;
    return false;
}

};


 
int main(){

 
 return 0;
}