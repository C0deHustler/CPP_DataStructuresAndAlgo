
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare( pair<int,int> p1, pair<int,int> p2){ // 2 pairs ( p1 and p2 ) will be taken as parameters
    return p1.first < p2.first; // this will decide which array element will come first since p1.first and p2.first represents the arr[i] in our vector 'v' which is storing the pair
}

int main(){
    int arr[] = {10,16,7,14,5,3,12,9};

    vector < pair<int,int> > v; // we'll use vector v to store the pair which will be of type <int, int>

    for(int i=0; i< (sizeof(arr) / sizeof(arr[0])); i++){ // loop will be used for storing array arr[] in the form of pair
//Now we'll make pair of each belement of array with it's index no.       // 'sizeof' is a built-in function and (sizeof(arr) / sizeof(arr[0]) ) will give the size of array arr[]
        v.push_back(make_pair(arr[i],i));       // pair <int,int> p;   (This method could also be used for making pair where all our pairs will be stored in pair 'p' )
// Make pair is a in-built function to make     // p.first = arr[i]; 
// pairs and these pairs will be                // p.secong = i;
// inserted (push_back() ) in vector 'v'     
    }                                          
    // sorting will be done here
    sort(v.begin(), v.end(), myCompare ); // a comparator function 'myCompare' will be used since we have to decide the order in which we want our pair to be sorted   
    // now all our elements are in sorted order along with their indexes as mentioned in Point-1
    // here, we will modify our original array ( Point-2 )
    for(int i=0; i<v.size(); i++){
        arr[v[i].second] = i;  // In an array of vector 'v' holding element 'i', we'll upgrade v[i].second (i.e. their index numbers) with 'i' of the loop,
                               // Explained in Point-2        
    }

    for(int i=0; i<v.size(); i++){ //Printing the ans
        cout<<arr[i]<<" ";
    }
    return 0;
}
        
