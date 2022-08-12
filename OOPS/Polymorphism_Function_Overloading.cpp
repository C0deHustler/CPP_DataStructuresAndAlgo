#include<iostream>
using namespace std;

class Hamza{
public:
    void fun(){
        cout<<"Function called with no arguments"<<endl;
    }

    void fun(int x){
        cout<<"Function called with int argument"<<endl;
    }

    void fun(double x){
        cout<<"Function called with double argument"<<endl;
    }
};

int main(){
    Hamza obj;
    obj.fun(); // 1st function will be called with no arguments
    obj.fun(6); // 2nd function will be called with int type argument
    obj.fun(32.38); // 3rd function will be called with double type argument
    obj.fun(); // 1st function will be called with no arguments
    obj.fun(21); // 2nd function will be called with int type argument
    
    return 0;
}