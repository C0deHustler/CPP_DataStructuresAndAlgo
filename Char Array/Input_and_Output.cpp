#include<iostream>
using namespace std;
int main(){
    char arr[100];
    cin>>arr;
    cout<<arr[2];
    return 0;
}

//but this code will print only one variable i.e.
//input = hamza then output = hamza
//but if input = ahmad hamza khan then output = ahmad

//if we have to print a particular char of input then Eg. if input = hamza then cout<<arr[2] then output = m