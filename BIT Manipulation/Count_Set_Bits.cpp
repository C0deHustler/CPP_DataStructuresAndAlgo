#include<iostream>
using namespace std;
int Countbits(int n){
    int count=0; //counter for counting the no. of iterations
    while(n){ //while(n != 0) can also be used here
        n = n & (n-1);
        count++; //increment the counter
    }
    return count;
}
int main(){
    cout<<Countbits(19)<<endl;
    return 90;
}