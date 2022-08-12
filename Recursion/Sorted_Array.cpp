#include<iostream>
using namespace std;
bool array(int arr[], int n){
    if(n == 1){ //base condition i.e. an array of only 1 element will obviously be sorted
        return true;
    }
    int restArray=array(arr + 1, n - 1);//Condition-1
    return (arr[0] < arr[1] && restArray);// if(arr[0] < arr[1] && restArray){
                                            //    return true;    (this code woule also be correct)
}
int main(){
    int arr[]={1,2,3,4,5,6,8,9,12,65};

    cout<<array(arr, 10);
    return 0;
}