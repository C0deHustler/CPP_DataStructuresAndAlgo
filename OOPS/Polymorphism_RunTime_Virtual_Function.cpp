#include<iostream>
using namespace std;
// first go and read the concept discussed in main function
class base{
public:
    virtual void print(){ // using virtual keyword so that this function will be ignored while calling
        cout<<"This is the base class' print function"<<endl;
    }
    void display(){
        cout<<"This is the base class' display function."<<endl;
    }
};

class derived : public base{
public:
    void print(){
        cout<<"This is the derived class' print function"<<endl;
    }
    void display(){
        cout<<"This is the derived class' display function."<<endl;
    }
};

int main(){
    base *baseptr; // we declared a pointer "baseptr" for "base" class
    derived d; // we declared an object "d" for "derived" class
    baseptr = &d; // we alloted the address of "d" in "baseptr",
                  // now "baseptr" of "base" class have the address of "d" of "derived" class
    // so on calling "print" and "display" function of "baseptr", print and display of derived class will be called and we'll get their output
    // but on running, we get :-
    // This is the base class' print function.
    // This is derived class' display function.
    // this is happening because compiler is confused that whether to call base class or derived class,
    // to solve this, we'll use "virtual" keyword and that virtual class will be then ignored.
    // now, see the function written above
    baseptr -> print(); // " -> " Arrow symbol will be used instead of "." dot symbol because we've used pointer
    baseptr -> display();

    return 0;
}
// since we've used virtual on "print" function only of "base" class so, on function calling, display function of base class will still be called
// if we'll use virtual keyword on "display" function also of "base" class then, on function calling, "display" of "base" will be ignored and "display" of "derived" will be called"  