#include<iostream>
using namespace std;
int Unique(int arr[], int n){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];//Point - 1
    }
    return xorsum;
}
int main(){
    int arr[]={1,2,3,4,3,4,5,2,1};
     
    cout<<Unique(arr, 9)<<endl;
    return 0;
}