#include<iostream>
#include<string>
using namespace std;
string moveallx(string s){
    if(s.length() == 0){ // base condition
        return ""; // return empty string
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1)); // Point-1, why substr(1), see logic in Replace_with_Pi.cpp

    if(ch == 'x'){ // Point-3
        return ans + ch;
    }
    return ch + ans; // Point-4
}
int main(){

    cout<<moveallx("axxbdxefxhix")<<endl;

    return 0;
}