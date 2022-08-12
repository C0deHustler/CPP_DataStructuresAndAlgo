#include<iostream>
using namespace std;
void inc(int n){
    if(n == 0){ //(base condition) same logic as decreasing.cpp
        return;
    }
    inc(n-1);//first we'll call function here, and by recursion that function will keep calling n-1, n-2, n-3,...and so on 
    cout<<n<<endl;//and when we'll hit our base condition then printing will start in increasing order
}
int main(){
    int n;
    cin>>n;

    inc(n);
    return 0;
}