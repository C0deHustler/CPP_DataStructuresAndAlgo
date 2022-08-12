#include<iostream>
using namespace std;

void countsort(int arr[], int n){
    // Find the maximum element
    int k = arr[0]; // maximum element, it will tell the size of count array
    for(int i=0; i<n; i++){
        k = max(k, arr[i]);
    }
    // Count Array
    int count[10] = {0}; // we must make the count array of k size, but that's not possible for now since memory cannot be allocated dynamically, so use size 10
    for(int i=0; i<n; i++){
        count[arr[i]]++; // storing the count of every element from original array
    }
    // Modified Count Array
    for(int i=1; i<=k; i++){// since k is the maximum element, and i=1 since we'll add count[i-1] in count[i], and if i=0 and i-1 then it will be wrong
        count[i] += count[i-1]; // point-2 and 3
    }
    // Output Array
    int output[n]; // point-4
    for(int i=n-1; i>=0; i--){ // i=n-1 because if size of array (n) = 5, then index of it's last element will be 5-1 = 4, and since we're traversing from back so i--.
        output[--count[arr[i]]] = arr[i]; // Point-5, pehle count array ka element layege, usse decrement krege, fir usss decremented index value pr store kr dege arr[i] in our output array
    }
    // Transferring values from Output array into Original Array
    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }

}
int main(){
    int arr[10] = {1,3,2,3,4,1,6,4,3};

    countsort(arr, 9);

    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}