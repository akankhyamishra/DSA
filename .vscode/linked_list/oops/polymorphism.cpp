#include<iostream>
 
using namespace std;
 
 class complex{
    private:
    int real, imaginary;
    public:
    complex(int r=0, int i=0){
        real=r;
        imaginary=i;
    }

    complex operator + (complex const &c){
        complex res;
        res.imaginary=imaginary+c.imaginary;
        res.real=real+c.real;
        return res;
    }

    void display(){
        cout<<real<<" + i"<<imaginary<<endl;
    }
 };
int main(){
complex c1(12,6),c2(7,8);
complex c3= c1 + c2;
c3.display();
 
 return 0;
}