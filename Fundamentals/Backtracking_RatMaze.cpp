#include<iostream>
using namespace std;
// Point-1
bool isSafe( int** arr, int x, int y, int n){ // (** i.e. double pointer - it will dynamically allocate memory to array), x and y will refer to the location of each block, n will be the size of square matrix 
    // all these conditions will work on the basis of our input matrix (i.e. the maze given by user)
    if(x<n && y<n && arr[x][y] == 1){// arr[x][y] == 1, since 1 is path and 0 is blockage
        return true;
    }
    return false;
}

bool RatInMaze(int** arr, int x, int y, int n, int** solArr){ //here we'll also declare our solArr dynamically

    if( x == n-1 && y == n-1){ // Base case (if we've reached our destination)
        solArr[x][y] = 1;
        return true;
    }
    if( isSafe(arr,x,y,n)){ // Point-2 (To check if we can move forward in x and y positions)
        solArr[x][y] = 1; // if yes, then we'll set 1 at that position since now we're making our solArr in this way
        if(RatInMaze(arr,x+1,y,n,solArr)){ // Point-3 //Recursive call for moving in right direction
            return true;
        }
        if(RatInMaze(arr,x,y+1,n,solArr)){ // Point-4 // Recursive call for moving in downward direction
            return true;
        }
        solArr[x][y] = 0; // Backtracking (Point-5) // we'll go back to the previous correct position and set x and y as 0 at the wrong position
        return false;
    }
    return false; // if isSafe function does not satisfies the condition 
}
int main(){
    int n; // size of square matrix
    cin>>n;
    // Dynamic allocation of memory in array
    int** arr = new int*[n];
    for(int i=0; i<n; i++){ // 'for' loop for allocating dynamic memory to each element of our 1D array
        arr[i] = new int[n];
    }
    // Loop for taking input values from user
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // Dynamic allocation of memory in solution array 
    int** solArr = new int*[n];
    for(int i=0;i<n;i++){
        solArr[i] = new int[n];
        for(int j=0; j<n; j++){ // solArr will be initialized as 0 for all elements so that our RatInMaze function can return 1 as the path for the maze in the form of solution to the problem
            solArr[i][j] = 0; // if not initialized, then system will allocate it some garbage value
        }
    }
    cout<<"Your path for maze is - "<<endl;
    if(RatInMaze(arr,0,0,n,solArr)){ // x=0 and y=0 as initial positions.
        for(int i=0; i<n; i++){ // Printing out our answer
            for(int j=0; j<n; j++){
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;

}