#include<iostream>
using namespace std;
int countPathMaze(int n, int i, int j){
    if(i == n-1 || j == n-1){ // if we have reached our destination then return 1
        return 1;
    }
    if(i >= n || j >= n){ // just like if start is greater than end, same way here
        return 0;
    }

    return countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1); // keep recursing and return the answer, (n,i+1,j) for forward movement
}                                                               // (n,i,j+1) fro downward movement
int main(){                                                     // '+' since we want all possible outcomes
    cout<<countPathMaze(3, 0, 0)<<endl; // n is 3, and 0 and 0 are starting coordinates
    return 0;
}