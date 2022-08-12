#include<iostream>
using namespace std;
// same as merge sort
long long merge(int arr[], int s, int mid, int e){
    long long inv = 0; // set count as 0;

    int n1 = mid-s+1;
    int n2 = e-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[s+i]; 
    }
    for(int i=0; i<n2; i++){
        b[i] = arr[mid+i+1];
    }

    int i=0;
    int j=0;
    int k=s;

    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++; i++;
        }
        if(b[j] < a[i]){ // Condition for inversion i.e. b[j] < a[j] and also i < j
            arr[k] = b[j];
            inv += n1-i; // n1 - i because explained in point-1 in notes ( a[i], a[i+1], a[i+2]...a[n1] > b[j]) )
            k++; j++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        k++; i++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++; j++;
    }
    return inv;
}
long long mergesort(int arr[], int s, int e){
    long long inv = 0; // initialise inversion counter as 0
    if(s<e){
        int mid = (s+e)/2;
        // Recursive call for dividing into subarrays
        inv += mergesort(arr, s, mid); // to keep a track of left side inversions
        inv += mergesort(arr, mid+1, e);  // to keep a track of right side inversions
        // function for merging the subarrays
        inv += merge(arr, s, mid, e); //  to count number of inversions when subarrays will be merged
    }
    return inv;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<mergesort(arr, 0, n-1)<<endl;
    return 0;
}