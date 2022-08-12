#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    long long int n;
    cin>>n;
    long long int a[n];
    long long int count[121]={0};
    
    for(int i=0;i<n;i++){
      cin>>a[i];
      count[a[i]]++;
    }
    long long int req=0;
    for(int i=0;i<121;i++){
      long long int co=0;
      for(int j=1;j<121;j++){
        if(count[i]==0 || count[j]==0){
          continue;
        }
        else if((j<=0.5*i+7) || (j>100 && i<100) || (j>i)) {
          continue;
        }
        else if(i==j){
          co+= (count[i]-1)*count[i];
        }
        else{
          co=co+ count[j]*count[i];
        }
      }
      req=req+co;
    }
    cout<<req<<"\n";
    return 0;
  }