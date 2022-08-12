#include<iostream>
using namespace std;
void PrimeFactor(int n){
    int spf[100]={0}; //same as previous ques.
    for(int i=2; i<=n; i++){ 
        spf[i] = i; //we by ourself will give each number it's spf (smallest prime factor of i),
    }               //since spf of each prime no. will be the prime no. itself, for eg.
                    //smallest prime factor of 2 will be 2, spf of 3 will be 3, spf[5] = 5.
    for(int i=2; i<=n; i++){
        
        if(spf[i] == i){ //if our number will be prime, then only it will start it's iteration over our range
                         //jab tak hum i=2,3,5,...so on se start krege tab tak already humari range ke saare elements marked ho chuke hoge 
            for(int j=i*i; j<=n; j+=i){ //same logic as previous question.
                
                if(spf[j] == j){ //we are checking if it is unmarked
                    spf[j] = i; //then only we will update spf[j] to i
                }
            }
        }
    }
    while(n!=1){ //logic explained in notes
        cout<<spf[n]<<" ";
        n = n / spf[n];
    }
}
int main(){
    int n;
    cin>>n;

    PrimeFactor(n);
    return 0;
}