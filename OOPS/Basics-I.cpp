#include<iostream>
using namespace std;

class student{
    public: // By default, all the data members are private which means that they can be accessed in that particular class only, not outside that class 
    string name; // by the use of public, all data members now can be accessed outside this class also
    int age;
    bool gender;

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
    // This is a way to declare objects :-
    // student a;     // same we can do for student b and student c
    //     a.name = 'Hamza';
    //     a.age = 21;
    //     a.gender = 1;

    // Better way to declare objects( by making array of objects) :-
    student arr[3];
    for(int i=0; i<3; i++){
        cout<<"Name - ";
        cin>>arr[i].name; // use of dot(.) operator and arr[i] will be an object here
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