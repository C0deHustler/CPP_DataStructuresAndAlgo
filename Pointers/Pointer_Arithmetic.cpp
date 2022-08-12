#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //if n=10
    int *nptr=&n;
    cout<<nptr<<endl;//For Eg. output=2000

    nptr++;
    cout<<nptr<<endl;//output = 2000+4 = 2004
    return 0;
}