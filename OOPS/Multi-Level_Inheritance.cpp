#include<iostream>
using namespace std;

class A{
public:
    void Afunc(){
        cout<<"Function A"<<endl;
    }
};

class B : public A{ // public and protected data members and member functions of class A have now inherited in public of class B 
public:
    void Bfunc(){
        cout<<"Function B"<<endl;
    }
};

class C : public B{ //  public and protected data members and member functions of class B have now inherited in public of class C 
public:
};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();

    return 0;
}