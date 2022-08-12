#include<iostream>
using namespace std;
int main(){
    char arr[100]="Apple";//declaration of char array
    int i=0;//declaration of iterator
    while(arr[i] != '\0'){//loop wil work until we'll reach last character i.e. \0 (null character)
        cout<<arr[i]<<endl;
        i++;//increment
    }
    return 0;
}