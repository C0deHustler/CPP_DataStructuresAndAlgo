//Code for Update Bit

#include<iostream>
using namespace std;
int UpdateBit(int n, int pos, int value){
    int mask=~(1<<pos);
    int m = n & mask;
    return (m | (value<<pos));
}

int main(){
    cout<<UpdateBit(5, 1, 1)<<endl;
    return 0;
}