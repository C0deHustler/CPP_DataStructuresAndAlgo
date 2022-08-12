#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void helper(vector<int> a, vector<vector<int>> &ans, int idx){ // vector 'a' will be passed, 'ans' vector will be passed
    if( idx == a.size() ){ // same as previous question
        ans.push_back(a);
        return;
    }
    for(int i=idx; i<a.size(); i++){
        if( i != idx && a[i] == a[idx]) // Point-1
            continue;
        
        swap(a[i],a[idx]); // swap is a in built function for swapping
        helper(a,ans,idx+1); // recursion

    } 
}

vector<vector<int>> permute(vector<int> nums){ // a new way of declaring function of vectors 
    sort(nums.begin(), nums.end() ); // by sorting we'll get similar numbers together, which will help us to club them together and then we can avoid the formation of duplicates
    vector<vector<int>> ans; // declaration of a new vector to store the results
    helper(nums, ans, 0); // calling function for performing actual permutation
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    vector<vector<int>> v = permute(a); // a new vector 'v' will store the ultimate answer and we'll pass this vector in permute function 

    for(auto a:v){
        for(auto i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}