//stoi function

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="786";
    int x=stoi(s1);//stoi (string to integer function) function will convert it into integer

    cout<<x+5<<endl;//786 + 5 = 791

    //to_string function

    int a=345;
    cout<< to_string(a+8) <<endl;//a+8 i.e 345+8=353
    cout<< to_string(a) + "9" <<endl;//a + "9" = 3459 since 'a' is now a string
    return 0;
}