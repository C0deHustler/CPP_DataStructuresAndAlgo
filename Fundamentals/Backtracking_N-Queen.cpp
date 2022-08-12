#include<iostream>
using namespace std;
// Function for checking those 3 conditions
bool isSafe(int** arr, int x, int y, int n){
    //Condo-1
    for(int row=0; row<x; row++){ // Checking if a column already has a queen or not, and for that particular column, we'll check each row
        if(arr[row][y] == 1){ // if that column already has a queen (i.e. existence of 1) then return false
            return false;
        }
    }
    // Declaring iterators for moving up and down in diagonals
    int row = x;
    int col = y;
    // Condo-2
    while(row>=0 && col>=0){ //Ki row-- aur col-- krte krte kahi row aur col 0 se kam na ho jaaye
        if(arr[row][col] == 1){ // if any queen is already in the diagonal ( i.e. existence of 1) then return false
            return false;
        }
        row--;
        col--;
    }
    // Condo-3
    while(row>=0 && col<n){ // ki col++ krte krte n se zyada value na chali jaaye  
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col++;
    }

    return true; // return true if don't get false in any case
}
// Function for recursive calling and backtracking
bool nQueen(int** arr, int x, int n){ // No requirement of y, because if the queen will be placed in a particular row then we'll move down to the next row and thus we don't need to move forward in columns
// no need of solution array cuz we'll make changes in our already existing array
    if(x>=n){ //base case i.e. if we have placed n number of queens in our chess board
        return true;
    }
// we'll check whether the position is safe to place our queen or not
    for(int col=0; col<n; col++){ 
        if(isSafe(arr, x, col, n)){// if the 3 conditions will be satisfied then we'll place queen(i.e. 1) at that place 
            arr[x][col] = 1;

            if(nQueen(arr, x+1, n)){// recursive call for checking whether we can move in next rows or not
                return true; // if yes then return true
            }
            // but if not true, then we'll do backtracking
            arr[x][col] = 0; // backtracking, do not put queen there(i.e. put 0 there)
        }
    }
    return false;// if it's not safe to place queen
}

int main(){
    int n;
    cin>>n;
    // dynamic memory allocation for array(same as previous question)
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
        for(int j=0; j<n; j++){// initialize it with 0, so that we don't get garbage values from system
            arr[i][j] = 0;
        }
    }
    if(nQueen(arr, 0, n) ){ // x=0, i.e. we'll start from initial position
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}