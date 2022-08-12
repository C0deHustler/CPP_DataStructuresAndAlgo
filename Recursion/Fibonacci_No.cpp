#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){ //if n==0 then return 0 or if n==1 then return 1,
        return n;     // which is also same as returning n as at that point n will obviously be either, 
    }                 // equal to 0 or 1 when these base conditions will be hit
    return fib(n-1) + fib(n-2); //int prevFib and int prevPrevFib variables can also be declared but this is more optimal way
}
int main(){
    int n;
    cin>>n;

    cout<<fib(n)<<endl;
    return 0;
}