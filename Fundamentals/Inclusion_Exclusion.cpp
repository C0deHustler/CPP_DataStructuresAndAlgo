#include<iostream>
using namespace std;
int divisible(int n, int a, int b){//n = number, a = 1st divider, b = 2nd divider
    int c1=n/a; //count1 = count of numbers divisible by a
    int c2=n/b; // count2 = count of numbers divisible by b
    int c3=n/(a*b); // count3 = count of numbers divisible by both a and b

    return (c1+c2-c3); //discussed in notes
}
int main(){
    int n, a, b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b)<<endl;
    return 0;
}