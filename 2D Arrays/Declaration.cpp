#include<iostream>
using namespace std;
int main(){
    int n,m; //No. of rows and columns
    cout<<"Enter number of rows and columns- ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements of matrix - "; //Taking input from user
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your matrix is - "<<"\n";
    for(int i=0;i<n;i++){ //Printing the matrix
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}