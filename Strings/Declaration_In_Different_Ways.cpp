#include<iostream>
#include<string>
using namespace std;

int main(){

    string str1(5,'h');//to print a particular character a number of times
    cout<<str1<<endl;

    string s="AhmadHamzaKhan";//to print a whole word without spacing
    cout<<s<<endl;

    string h;//to take input a whole sentence with spacing
    getline(cin, h);//use getline function to input(cin) a whole sentence with spaces
                    //if we'll use only cin without getline() then,if input="Hamza is a good boy."
    cout<<h<<endl;  //then output="Hamza"

    return 0;
}