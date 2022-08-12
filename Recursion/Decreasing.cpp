#include<iostream>
using namespace std;
void dec(int n){
    if(n == 0){ //in decreasing order, if we reach 0 then that means it's the end and we can return the function
        return;
    }
    cout<<n<<endl; //first we will print the number(starting from largest to smallest)
    dec(n-1); //this recursion method will call and return decreasing numbers as we move on
}
int main(){
    int n;
    cin>>n;

    dec(n);
}