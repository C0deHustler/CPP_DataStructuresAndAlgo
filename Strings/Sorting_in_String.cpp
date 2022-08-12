#include<iostream>
#include<algorithm>//header to be used for sorting a string
#include<string>
using namespace std;
int main(){
    string s="aedcvgyhnjik";
    sort( s.begin(), s.end() );//begin() will provide us the starting iterator
                               //end() will give the iterator location after end of sorting
    
    cout<<s<<endl;
    return 0;
}