#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0){ //base condition
        return 1; //return 1 because 0! = 1
    }
    int prevFactorial = factorial(n-1);
    return n * prevFactorial;
}
int main(){
    int n;
    cin>>n;

    cout<<factorial(n);
    return 0;
}