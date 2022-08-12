#include<iostream>
#include<string>
using namespace std;
int main(){
    //Method-1
    string st1,st2,st3,st4,st5,st6,st7;
    st1="fam";
    st2="ily";
    st1.append(st2);//append function is used to add one string to another
    cout<<st1<<endl;

    //Method-2
    st3="kooka";
    st4="bura";
    cout<<st3 + st4<<endl;//by using addition operator

    //Method-3
    st5="Dho";
    st6="ni";
    st7=st5 + st6;
    cout<<st7<<endl;
    cout<<st7[3]<<endl;//Dho " n " i   //to access any particular letter
    return 0;
}