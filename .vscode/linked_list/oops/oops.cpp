#include<iostream>
 
using namespace std;
 
 class student{
    private:
    string name;


    public:
    int age;
    int marks;

    //constructor
    student(string s, int a, int m){
        name=s;
        age=a;
        marks=m;
        
    }

    //copy constructor
    student(student &a){
        name=a.name;
        age=a.age;
        marks=a.marks;
    }
    bool operator == (student &a){
        if(name==a.name && age==a.age && marks==a.marks){
            return true;
        }
        return false;
    }
    
    //destructor
    // ~student(){
    //     cout<<"destructor called"<<endl;
    // }
    void setName(string s){
        name=s;
    }
    void getName(){
        cout<<name<<endl;
    }
    void print(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"marks: "<<marks<<endl;


    }
 };
int main(){
    // student a;
    string s;
    student a("akankhya", 20, 50);
    a.print();
    student c=a;
    student b("ananya", 51, 21);
    // a.age = 20;
    // a.marks = 50;
    // cout<<"age: "<<a.age<<endl;
    // cout<<"marks: "<<a.marks<<endl;
if(b==a){
    cout<<"same"<<endl;
}
else{
    cout<<"not same"<<endl;
}
 
 return 0;
}