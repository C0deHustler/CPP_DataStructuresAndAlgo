#include<iostream>
using namespace std;
int main(){
    //Declaration of matrix
    int n; //only n because it's a square matrix
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){ //taking input from user
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //swapping of element(i,j) with element(j,i)
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){ // j=i because we have to swap those elements which are above diagonal with the elements which are below diagonal
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"\n"; //line break for easy visualisation
    //printing of transposed array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}