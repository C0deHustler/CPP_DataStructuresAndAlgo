//Call by reference method

#include<iostream>
using namespace std;
void swap(int *a, int *b){//*a and *b bcoz these pointers will accept the addresses when called by the main function
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cin>>a>>b;

    swap(&a,&b);//directly swapping addresses of a and b without declaring variables

    cout<<a<<" "<<b;
    return 0;
}