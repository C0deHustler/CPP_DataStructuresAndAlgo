#include<iostream>
#include<string>
using namespace std;
void substring(string s, string ans){ //string ans will be our output that we will print

    if(s.size() == 0){ // Base case, in recursion our string is getting smaller step by step so once our string will
        cout<<ans<<endl; // become zero, we'll print our answer
        return;// from here our answer will be returned
    }
    char ch=s[0];// seperate first character from the input string
    int code = ch; //for storing ascii code of ch
    string ros = s.substr(1); // then we'll find the rest of the string and will store it in variable 'ros'

    substring(ros, ans);// Point-3, 'ros' because we doing recursion on rest of the string apart from out first character
    substring(ros, ans + ch); // Point-1
    substring(ros, ans + to_string(code)); // Point-2, to_string for converting int to string 
}
int main(){

    substring("AB", "");
    
    return 0;

}