#include<iostream>
using namespace std;
class A{
public:
    void func(){
        cout<<"Inherited"<<endl;
    }
};

class B : public A { // public and protected data members and member functions of class A are now inherited in class B
};

int main(){
    B b;
    b.func(); // "Inherited" will be printed since class B has now inherited class A

    return 0;
}