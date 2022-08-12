#include<iostream>
using namespace std;

//First occurence

int firstocc(int arr[], int n, int i, int key){ //'i' is the pointer which will return the position of the element when it will be found
    if(i == n){ //base condition, if we reached our last element and still not found the element the return -1
        return -1;
    }
    if(arr[i] == key){ //first we'll check if our element is equal to key or not, if yes then return it's position i.e. the first occurence answer
        return i;      //if no then move on to the next element, by
    }
    return firstocc(arr, n, i+1, key); //by using this method of recursion
                                       //i+1 since we are moving to the next element in our array
}

//Last occurence

int lastocc(int arr[], int n, int i, int key){
    if(i == n){ //base condition same as firstocc()
        return -1;
    }
    int restarray = lastocc(arr, n, i+1, key); //here first we'll do the recursion for moving on to the next elements

    if(restarray != -1){ //(restarray == -1) means that our key is not found, but (restarray != -1) means we have found our key
        return restarray;
    }
    if(arr[i] == key){ //same as firstocc() i.e. print i if we found our key
        return i;      //here, recursion first, checking for key availability last
    }
    else{
        return -1; // -1 if key not found
    }

}
int main(){
    int arr[]={4,2,1,2,5,2,7};

    cout<<firstocc(arr, 7, 0, 8)<<endl;//arr, no. of elements, starting position of pointer, element to be searched
    cout<<lastocc(arr, 7, 0, 5)<<endl; // same as above
    return 0;
}