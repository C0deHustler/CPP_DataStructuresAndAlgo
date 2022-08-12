#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int *nptr;
    nptr=&n;
    //if n=32
    cout<<nptr<<endl;//output=0x61ff08
    cout<<&n<<endl;//output=0x61ff08

    cout<<*nptr<<endl;//output=32
    return 0;
}