#include<iostream>
using namespace std;
int GetBit(int n, int pos ){ //'n' is the number and 'pos' is the position in our number whose bit we want to know
    return((n & (1<<pos)) != 0); //(see in notes)
}   // if condition satisfies then return true(i.e. 1), else false(i.e. 0)
int main(){
    cout<<GetBit(5, 2)<<endl;  //i.e. what will be at position 2 in the number 5. 
    return 0;
}