#include<iostream>
using namespace std;
int countPath(int s, int e){
    if(s == e){ // when we have same starting and ending point
        return 1;
    }
    if(s>e){ // since we cannot move backwards
        return 0;
    }
    int counter = 0; // counter for keeping track of no. of moves
    for(int i=1; i<=6; i++){ // loop till 1 to 6 since dice has 1 to 6 markings
        counter += countPath(s+i, e); //keep doing recursion and keep updating the counter
    }
    return counter;

}
int main(){
    cout<<countPath(0, 3)<<endl;
    return 0;
}