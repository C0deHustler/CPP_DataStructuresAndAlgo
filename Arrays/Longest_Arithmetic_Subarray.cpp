//Longest Arithmetic Subarray (Google Kick Start)

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=2; //bcoz 2 is the min. possible ans for this problem.
    int pd=arr[1]-arr[0]; //yahi se start hoga comparison. 
    int j=2; //pd me element 0 aur 1 pehle hi comparison ke liye use ho gaya to hum j=2 se start krege.
    int curr=2; //abhi ke liye kyunki 2 hi humara best ans chal rha hai
    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++; 
        }
        else{
            pd=arr[j]-arr[j-1]; //streak toot gayi to element j aur j-1 se fir se comparison restart krege.
            curr=2; //aur phir se curr ko 2 kr dege
        }
        ans=max(ans,curr);//comparison for getting the max. ans
        j++; //keep updating j.
    }
    cout<<ans<<endl;
    return 0;
    }
