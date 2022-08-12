#include<iostream>
using namespace std;
int power(int n, int p){
    if(p == 0){ //if p=0 i.e. n^p = n^0.
        return 1; //return 1 because n^0 = 1.
    }
    int prevPower=power(n, p-1); //same logic as previous question (written in notes)
    return n * prevPower;
}
int main(){
    int n, p;
    cin>>n>>p;

    cout<<power(n, p)<<endl;
    return 0;
}