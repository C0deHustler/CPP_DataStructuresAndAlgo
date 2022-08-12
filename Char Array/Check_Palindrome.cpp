#include<iostream>
using namespace std;
int main(){
    int n;//Size of word
    cin>>n;
    char arr[n+1];//declaration of array
    cin>>arr;

    bool check=1;//to check if our condition is true or false even after execution of loop
    for (int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){//checking first and last characters simultaneously
            //[n-1-i] ---- n-1 because we'll take our last character
            //[n-1-i] ---- n-1-i so that loop will keep working for 2nd last,3rd last,4th last and so on characters
            check=false;
            break;//break the loop if it is a palindrome since we are checking (arr[i] != arr[n-1-i])
        }
    }
    if(check == true){//true or 1 same thing
        cout<<"The word is a palindrome.";
    }
    else{
        cout<<"The word is not a palindrome.";
    }
    return 0;
}