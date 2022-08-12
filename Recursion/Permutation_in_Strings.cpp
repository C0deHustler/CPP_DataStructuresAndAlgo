#include<iostream>
#include<string>
using namespace std;
void permutation(string s, string ans){
    if(s.length() == 0){ // base case
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<s.length(); i++){ // loop till the length of the string
        char ch = s[i]; //ch will store our fixed character, as shown in notes
        string ros = s.substr(0, i) + s.substr(i+1); // s.substr(0, i) :- 1- Permutation will occur here for characters before our fixed character
                                                     //                   2- 0 means from the starting point, and i means the length that will be equal to i 
        permutation(ros, ans+ch);                    // s.substr(i+1) :- 1- Permutation of characters after fixed character will occur from here
    }                                                //                  2- i+1 to show that permutation will start after i and no need to specify the range since length will depend upon the input by user
}
int main(){       // permutation(ros, ans+ch) means recursion for ros and in our ans, we will add ch i.e our fixed character.                                          
 
    permutation("ABC", "");
    return 0;
}