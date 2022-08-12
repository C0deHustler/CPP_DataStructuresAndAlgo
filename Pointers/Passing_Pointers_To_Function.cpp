//Code for swapping values wwithout the use of pointers, that's why values will not be able to be swapped.

//Call by value method

// #include<iostream>
// using namespace std;
// void swap(int a, int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b;
//     return 0;
// }


//Call by reference method  
#include <iostream>
using namespace std;
void swap(int *a, int *b){//since we are calling pointers, so we also have to accept them with the help of pointers
    int temp = *a;//that's why we will declare int *a, int *b
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    cin >> a >> b;

    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr); //swapping the addresses of both a and b

    cout << a << " " << b;
    return 0;
}