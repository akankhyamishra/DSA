#include<iostream>
 
using namespace std;

class employee{
public:
string name;
int dept;

void set(){
    cin >> name;
    cin >> dept;
}
void get(){
    cout<<"name: "<<name<<endl;
    cout<<"dept: "<<dept<<endl;
}
}; 


//multiple inheritance

class student{
    public:
    int id;

    void print(){
        cout<<"id: "<<id<<endl;
    }
};

class hybrid: public student, public employee{

};

class employee1: public employee{

};



int main(){
employee e;
e.set();
e.get();
 
 return 0;
}