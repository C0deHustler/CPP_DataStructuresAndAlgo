#include<iostream>
using namespace std;

class A{
public:
    void Afunc(){
        cout<<"Function A"<<endl;
    }
};

class B{
public:
    void Bfunc(){
        cout<<"Function B"<<endl;
    }
};

class C : public A , public B{ // public and protected data members and member functions of class A and class B have now inherited in public of class C 
public: // we can also declare attributes and function of class C of it's own if we want
};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();

    return 0;
}