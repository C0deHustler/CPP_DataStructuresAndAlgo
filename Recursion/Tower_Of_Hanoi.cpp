#include<iostream>
using namespace std;
void towerofhanoi(int n, char src, char dest, char helper){//(no. of blocks, source rod, destination rod, helper rod) 
    if(n == 0){ // base condition or base case
        return;
    }
    towerofhanoi(n-1, src, helper, dest); // Point-1, here helper will become the destination rod and dest will become the helper rod
    cout<<"move from "<<src<<" to "<<dest<<endl;// One block has been moved from source to destination
    towerofhanoi(n-1, helper, dest, src); // Point-4, helper will become source rod and dest will become dstination rod while moving n-1 blocks as mentioned in point-4
}
int main(){
    
    towerofhanoi(3, 'A', 'C', 'B');
    return 0;
}