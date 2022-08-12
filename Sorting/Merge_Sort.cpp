 #include<iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e){
// at this point, elements btw (s and mid) and (mid+1 and e) have got sorted, so we'll make 2 temporary arrays of size,
    int n1 = mid-s+1; // n1 = 3-0+1 = 4
    int n2 = e-mid; // n2 = 7-3 = 4
// new temporary arrays need to to be declared since for merging, we've to compare btw 2 subarrays by using pointers 
    int a[n1]; // temporary 1st subarray of n1 size
    int b[n2]; // temporay 2nd subarray of n2 size
// inserting values in these 2 temporary subarrays
    for(int i=0; i<n1; i++){  // i<n1
        a[i] = arr[s+i];// s+i because in main array, s is the starting point
    }
    for(int i=0; i<n2; i++){ // i<n2
        b[i] = arr[mid+1+i]; // mid+1+i because 2nd subaaray will start from mid+1 element
    }
// declaration of pointers
    int i = 0; // poinetr for 1st subarray (a)
    int j = 0; // pointer for 2nd subarray (b)
    int k = s; // pointer for traversing the main array and it will start from start(i.e. s)
// merging of subarrays
    while(i<n1 && j<n2){ // till pointers are under our subarrays
        if(a[i] < b[j]){ // explained in notes
            arr[k] = a[i]; // assignment of sorted element in main array
            k++; i++; // incrementation of both pointers
        }
        if(b[j] < a[i]){ // explained in notes
            arr[k] = b[j]; //         "
            k++; j++; //       "
        }
    }
// for that case if any pointer in any one subarray will reach it's end before the second pointer will reach it's end
// so that the loop will keep working and not stop because of any 1 pointer, since we've used '&&' operator in above 'while' condition
    while(i<n1){ // individual loop for subarray 'a'
        arr[k] = a[i];
        k++; i++;
    }
    while(j<n2){ // individual loop for subarray 'b'
        arr[k] = b[j];
        k++; j++;
    }
    
}

void mergesort(int arr[], int s, int e){ // array, starting pointer, ending pointer
    if(s<e){ // loop will run until starting pointer will stay lower than ending pointer
        int mid = (s+e)/2; // find the mid-element(mid = (0+7)/2 i.e. 3)

        mergesort(arr, s, mid); // function will again be called recursively for the subarray before mid-element(btw starting and mid element)
        mergesort(arr, mid+1, e); // function will again be called recursively for the subarray after mid-element(between the element after mid-element and end element)

        merge(arr, s, mid, e); // calling for merging function and we'll not make a new array, the procedure will be done in the same array
    }
}

int main(){
    int arr[] {6,3,9,5,2,8,7,1};
    mergesort(arr, 0, 7);
    cout<<"Here's your sorted array - "<<endl;
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

