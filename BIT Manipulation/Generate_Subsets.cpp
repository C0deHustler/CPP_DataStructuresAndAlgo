#include<iostream>
using namespace std;
void Subsets(int arr[], int n){
    for(int i=0; i< (1<<n); i++){ //Point - 1
        for(int j=0; j<n; j++){   //Point - 2
            if( i & (1<<j)){      //Point - 3 
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int arr[3]={1,2,3};
    Subsets(arr, 3);
    return 0;
}