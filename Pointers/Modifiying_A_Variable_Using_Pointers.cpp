#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //if n=32
    int *p;
    p=&n;
    cout<<*p<<endl;//32

    *p=66;
    cout<<*p<<endl;//66
    return 0;
}