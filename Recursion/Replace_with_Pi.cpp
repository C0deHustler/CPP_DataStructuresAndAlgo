#include<iostream>
#include<string>
using namespace std;
void replacePi(string s){
    if(s.size() == 0){ // Base case
        return;
    }
    if(s[0] == 'p' && s[1] == 'i'){ // Point-1
        cout<<3.14;
        replacePi(s.substr(2)); // calling recursion after 2 elements i.e substr(2) since 'p' and 'i' are 1st and 2nd element,
    }                           // s string will go under recursion after 'pi'
    else{  // Point-3
        cout<<s[0]; // printing the ith character
        replacePi(s.substr(1)); // calling recursion same as above, using substr(1) since recursion will start after the ith element
    }
}
int main(){

    replacePi("pippxxppiixipi");
    return 0;
}