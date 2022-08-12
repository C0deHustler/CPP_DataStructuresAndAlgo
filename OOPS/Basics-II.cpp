#include<iostream>
using namespace std;

class student{

    string name; // now string is private

    public: // rest all of these are public
    int age;
    bool gender;
    // declaration of function for accessing private data member( i.e. name) outside the class
    void setName(string s){
        name = s; // since we have used "name" attribute, so any string value given by the user will be allocated to data member "name"
    }

    void printInfo(){ // No need to define parameters i.e no need to pass objects for printing values
                      // we'll just call the function through the object and the function will itself print the values of that object
        cout<<"Name - ";
        cout<<name<<endl;
        cout<<"Age - ";
        cout<<age<<endl;
        cout<<"Gender - ";
        cout<<gender<<endl;                  
    }
};

int main(){
   
    student arr[3];
    for(int i=0; i<3; i++){

        string s; // By the use of function
        cout<<"Name - ";
        cin>>s; // taking value of string as input from user
        arr[i].setName(s); // calling of function

        cout<<"Age - ";
        cin>>arr[i].age;

        cout<<"Gender - ";
        cin>>arr[i].gender;
    }

    cout<<"Your output is - "<<endl;
    // calling of function for printing values
    for(int i=0; i<3; i++){
        arr[i].printInfo();
    }

}