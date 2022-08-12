#include<iostream>
#include<string>
using namespace std;

string keypadArr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s, string ans){ //string s will tell us that which numbers are present in correspondance to which characters
    if(s.length() == 0){// base case, same logic as previous question
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];//if numbers in string are 2 and 3 then by ch=s[0], we'll select 2 i.e. the first number
    string code = keypadArr[ch- '0'];//to find that which element of array is present in correspondance to our ch i.e. s[0]
                                     //[ch - '0'] for converting char into int, ascci code of 0 will get minus from ascii code of ch.
    string ros = s.substr(1); //rest of the string after skipping 1st element using substr(1).

    for(int i=0; i< code.length(); i++){//loop will work till the length of our code
        keypad(ros, ans + code[i]);  //Point-1 
    }
}
int main(){

    keypad("23", "");

    return 0;

}