#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;

    int r=0;//since we'll start comparison from top right most corner
    int c=m-1;//                same as above
    bool found=false;
    while(r<n && c>=0){
        if(arr[r][c]==target){//arr[r][c] is our comparison element
            found=true;
        }
        if(arr[r][c]>target){//move left by one column
            c--;
        }
        else{ //move down by one row
            r++;
        }
    }
    if(found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;

}