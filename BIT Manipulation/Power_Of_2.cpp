#include<iostream>
using namespace std;
int Powerof2(int n){
    return (n && !(n & (n-1))); //return (n & (n-1)) means true i.e. 1 but,
}                               //return !(n & (n-1)) means false i.e. 0 and we want to check whether (n & (n-1)) is equal to 0.
int main(){                     //n is alse taken in case our n=0,for this check notes.
    cout<<Powerof2(128)<<endl;  
    return 0;
}