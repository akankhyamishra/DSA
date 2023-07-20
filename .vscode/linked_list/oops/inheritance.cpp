#include <iostream>

using namespace std;

class employee
{
    public:
    int id=25;

    void func(){
        cout<<id<<endl;
    }
};
class B: public employee{
    public:
   void print(){
    cout<<"function"<<endl;
   }
};
class C: public B{

};

int main()
{
    B b1;
    // b1.func();
    C c1;
    c1.func();
    c1.print();

    return 0;
}