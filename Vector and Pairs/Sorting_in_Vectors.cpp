#include<iostream>
#include<vector>
#include<algorithm> // 'algorithm' header need to be used for sorting
using namespace std;
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    v.push_back(1);

    sort(v.begin(), v.end()); // sorting will be done between begin() and end()  

    for(int i=0; i<v.size(); i++){// print out the vector
        cout<<v[i]<<" ";
    }
    return 0;
}