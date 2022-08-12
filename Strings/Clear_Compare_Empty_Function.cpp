#include<iostream>
#include<string>
using namespace std;
int main(){

    //Clear Function

    string str="Ahmad Hamza Khan";
    str.clear();//it will clear str and print nothing
    cout<<str<<endl;

    //Compare function

    string s1="abc";
    string s2="xyz"; //if s2="abc"; then answer will be 0 (abc - abc = 0)
    cout<<s2.compare(s1)<<endl;//1 (xyz - abc = 1)

    //New way to do check compare function

    string s3="mno";
    string s4="mno";
    if(s4.compare(s3) == 0){
        cout<<"String are equal."<<endl;
    }

    //Another new way to check compare function

    if(! s4.compare(s3)){// ! means not
        cout<<"Still strings are equal."<<endl;
    }

    //Empty function

    string s5="Mumbai";
    cout<<s5<<endl;

    s5.clear();//we made the s5 string empty using clear function

    if( s5.empty() ){//use of empty function
        cout<<"The s5 string is empty."<<endl;
    }

    string s6="Kolkata";
    if(! s6.empty() ){ //we have not used clear function so it's still non-empty.
        cout<<"The s6 strings is not empty."<<endl;
    }

    return 0;
}