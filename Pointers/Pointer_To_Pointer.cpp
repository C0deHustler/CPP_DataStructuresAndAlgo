#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //if n=10
    int *p;
    p=&n;
    cout<<*p<<endl;//10

    int **q;
    q=&p;
    cout<<*q<<endl;//0x61ff08
    cout<<**q<<endl;//10
    return 0;
}