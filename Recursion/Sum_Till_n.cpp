#include<iostream>
using namespace std;
int Sum(int n){
    if(n == 0){ //Point-2
        return 0;
    }
    int prevSum=Sum(n-1);//Point-1
    return n + prevSum;
}
int main(){
    int n;
    cin>>n;

    cout<<Sum(n);
    return 0;
}

// Recursion : When a function calls itself to make the problem smaller

// Working:
// if we are making sum function using recursion-->
// int sum(int n)
// {
//     if(n == 0)
//         return 0;
//     else
//         return n + sum(n-1);
// }

// lets say here n = 4, then
// first main() calls         sum(4)  
//       then, sum(4) calls sum(3)
//             sum(3) calls sum(2)
//             sum(2) calls sum(1)
//             sum(1) calls sum(0)

//                   Now, sum(0) returns 0
// then, sum(1) returns 1+sum(0) = 1+0 = 1
//       sum(2) returns 2+sum(1) = 2+1 = 3
//       sum(3) returns 3+sum(2) = 3+3 = 6
//       sum(4) returns 4+sum(3) = 4+6 = 10
// then, sum(4) is returned to main()