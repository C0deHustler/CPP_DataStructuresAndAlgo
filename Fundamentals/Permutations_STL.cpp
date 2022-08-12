#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector< vector<int> > ans; // vector 'ans' will store the answer, we have made it global by specifying here so that we don't have to pass value in it each and every time

int main(){
    int n; // no. of elements of array
    cin>>n;
    vector<int> a(n); // vector 'a' storing our elements
    for( auto &element:a){ // taking elements from user using auto, and use & before element 
        cin>>element;
    }

    sort(a.begin(), a.end());
    do{
        ans.push_back(a);
    } while( next_permutation(a.begin(), a.end() ) );

    for( auto v:ans){ // traversing permuted arrays of 'v' stored inside 'ans'
        for(auto i:v){ // traversing each single element stored inside 'v'
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}