#include <bits/stdc++.h>
using namespace std;
string solve(int A[], string str,int K)
{

 int N = str.size();

 int count[N + 1] ;
    memset(count, 0, sizeof(count));
     
 for (int i = 0; i < K; i++) {
  count[A[i]]++;
 }

 for (int i = 1; i <= N / 2; i++) {

  
  count[i] = count[i] + count[i - 1];

 
  if (count[i] & 1) {
   swap(str[i - 1], str[N - i]);
  }
 }

 return str;
}


int main()
{

    int n,m;
    cin>>n;
    
 string s;
    cin>>s;
    
    cin>>m;
    int a[m];
 
     for(int i=0;i<m;i++) 
     cin>>a[i];
 
 cout << solve(a, s, m);

 return 0;
}