#include<iostream>
using namespace std;
// Swap Function
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
// Wave Sort
void waveSort(int arr[], int n){
    for(int i=1; i<n; i+=2){ // start from i=1 since we are comparing alternate elements, and i+=2 because we'll jump between alternate elements

        if(arr[i] > arr[i-1]){
            swap(arr[i], arr[i-1]);
        }

        if(arr[i] > arr[i+1] && i < n-2){ // in case of arr[i+1], value of i+1 cannot go out of array range so we'll put condition of i < n-2
            swap(arr[i], arr[i+1]);
        }
    }
}
int main(){
    int arr[] = {1,3,4,7,5,6,2};

    waveSort(arr, 7);

    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}