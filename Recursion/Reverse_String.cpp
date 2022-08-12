#include<iostream>
#include<string>
using namespace std;
void reverse(string s){
    if(s.size() == 0){ // Point-2, also Base case
        return;
    }
    string restofstr = s.substr(1); //Point-1
    reverse(restofstr); // Point-3
    cout<<s[0]; //s[0] since we are printing only 1st character
} 
int main(){

    reverse("chennai");
    return 0;
}