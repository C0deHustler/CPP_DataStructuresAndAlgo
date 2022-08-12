#include<iostream>
using namespace std;
void PrimeSieve(int n){
    int prime[100]={0}; //size of array = 100 and we initiated it with 0.

    for(int i=2; i<=n; i++){ //1st loop
        if(prime[i] == 0){ // we are checking if the number is unmarked, 0 means unmarked
            
            for(int j=i*i; j<=n;j+=i){ //since the number is unmarked then we'll run this loop to mark the multiples of every unmarked number
                                       //j=i*i, we are checking from the square of the unmarked numbers for an optimized sol.
                prime[j] = 1;          //j+=i, because we are jumping in our array on the multiples of unmarked numbers (i.e. i) rather than moving in a linear way
            }                          //prime[j]=1, means we are making these numbers as marked ( 1 means marked) because they are multiples of unmarked numbers
        }
    }
    for(int i=2; i<=n; i++){//printing out unmarked numbers i.e. prime numbers
        if(prime[i]==0){ // 0 means unmarked
            cout<<i<<" "; //cout will be i since i represents the number 
        }
    }

}
int main(){
    int n;
    cin>>n;

    PrimeSieve(50);
    return 0;
}