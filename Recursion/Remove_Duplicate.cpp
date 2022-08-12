#include<iostream>
#include<string>
using namespace std;
string removeDup(string s){ 
    if(s.length() == 0){ //base condition
        return ""; // return empty string
    }
    char ch = s[0]; //declaration of a variable for storing 1st character of our string
    string ans = removeDup(s.substr(1)); // Point-1,  why substr(1), see logic in Replace_with_Pi.cpp
                                         // declaration of a variable 'ans' for storing recursive string (H) 

    if(ch == ans[0]){ // Point-3
        return ans;
    }
    return ch + ans; // Point-4
}
int main(){

    cout<<removeDup("aaabbbeeecdddd")<<endl;

     return 0;
}