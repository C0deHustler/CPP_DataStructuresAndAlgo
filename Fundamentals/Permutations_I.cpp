#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> > ans; // vector 'ans' will store the answer, we have made it global by specifying here so that we don't have to pass value in it each and every time
void permute( vector<int> &a, int idx){ // function for doing permutation, a is our array given by user and idx is our current index no. for swapping
    if(idx == a.size() ){ // if we are at the last element of our array and all permutations have already been generated, then
        ans.push_back(a); // saare permutation (a) apne ultimate answer (ans) me daal do
        return;
    }
    for( int i=idx; i<a.size(); i++){
        swap(a[i],a[idx]); // swap is an in-built function for swapping values
        permute(a, idx + 1); //  recursion call
        swap(a[i], a[idx]); // keep swapping after getting recursed values
    }
    return;
}
int main(){
    int n; // no. of elements of array
    cin>>n;
    vector<int> a(n); // vector 'a' storing our elements
    for( auto &element:a){ // taking elements from user using auto, and use & before element 
        cin>>element;
    }

    permute(a, 0); // calling function, 'a' since we want to perform permutation in 'a', 0 because we'll start from index no. = 0.

    for( auto v:ans){ // traversing permuted arrays of 'v' stored inside 'ans'
        for(auto i:v){ // traversing each single element stored inside 'v'
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}