#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // declaration of vector
    v.push_back(1); // use push_back for insertion of elements
    v.push_back(2);
    v.push_back(3);
    // printing using simple method
    for(int i=0; i<v.size(); i++){ // v.size() represents the size of vector 
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // printing using iterator
    vector<int>::iterator it; // declaration of 'it' named iterator
    for(it = v.begin(); it != v.end(); it++){ // v.begin() = starting of vector, v.end() = ending of vector
        cout<<*it<<" "; // * will be used since our iterator is a kind of pointer
    }
    cout<<endl;
    // traversal using "auto"
    for(auto element:v){ // in auto, no need to declare any datatype, it will itself accept the dataype mentioned during the time of initialisation.
                         // element keyword or any kwyword of our choice will link to actual elements of vector v when we use them as - element:v
        cout<<element<<" ";
    }
    cout<<endl;
    return 0;
}