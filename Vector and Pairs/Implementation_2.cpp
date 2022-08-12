#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6); // output = 4 5 6

    v.pop_back(); // 1 element from the vector will be popped out from the last

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // another way of declaration
    vector<int> v2(4, 60); // 60 will be printed 4 times
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<"Now we'll do swapping"<<endl;
    // to swap values of 2 vectors
    swap(v,v2);
    for(int i=0; i<v.size(); i++){ // printing of vector v
        cout<<v[i]<<" ";
    }
    cout<<endl;
     for(int i=0; i<v2.size(); i++){ // printing of vector v2
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    return 0;
}