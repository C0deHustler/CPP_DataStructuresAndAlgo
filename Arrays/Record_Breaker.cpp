#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1]; //n+1 bcoz for satifaction of condition-2(if i>(i+1)), we have to take an extra element
    arr[n]=-1; //since arr[n] will be the last element and our all visitors will be non-negative, so by this condition we can always satify our condition-2.
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){ //if we'll have only 1 visiting day then our Record Breaker Day will be 1.
        cout<<"1"<<endl;
        return 0; //execution of code will end here
    }
    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){ // check for conditon-1 and 2
            ans++; //if yes then increment ans by 1.
        }
        mx=max(mx,arr[i]); //update our record visiting day i.e largest element of our array.
    }
    cout<<ans<<endl;
    return 0;
}