#include<iostream>
using namespace std;
// function for swapping
void swap(int arr[], int i, int j){ // int i and j since arr[i] and arr[j] will be swapped
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
// partition function will return index for pivot element
int partition(int arr[], int s, int e){
    int pivot = arr[e]; // assuming pivot to be the last element
    int i = s-1; // in notes
    for(int j=s; j<e; j++){ //loop btw starting element to the 2nd last element
        if(arr[j] < pivot){ // in notes
            i++;
            swap(arr,i,j); // function for swapping values
        }
    }
    swap(arr, i+1, e); // in notes
    return i+1; // returning of the pivot element
}
void quicksort(int arr[], int s, int e){
    if(s<e){
        int pi = partition(arr, s, e); // this function will return pivot element
        quicksort(arr, s, pi-1); // recursive call for 1st subarray (btw start to before pivot)
        quicksort(arr, pi+1, e); // revcursive call for 2nd saubarray ( btw after pivot to last element)

    }
}
int main(){
    int arr[] = {6,3,9,5,2,8,7};
    quicksort(arr, 0, 6);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}