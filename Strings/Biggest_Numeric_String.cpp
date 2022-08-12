#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1="5317679802";//s1="asxcftgh" then also with same code we can get sorted string in descending order
    sort( s1.begin(), s1.end(), greater<int>() );//greater<int>() is an argument used for sorting in descending order
                                                 //gretaer<char>() can also be used
    cout<<s1<<endl;
    return 0;
}