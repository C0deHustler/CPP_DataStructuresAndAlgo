#include<iostream>
using namespace std;

class student{
    string name; 

    public:
    int age;
    bool gender;
   
    void setName(string s){
        name = s; 
    }
    // Default Constructor
    student(){
        cout<<"Default Constructor"<<endl;
    }

    // Parameterised Constructor
    student(string s, int a, bool g){
        cout<<"Parameterised Constructor"<<endl;
        name = s; 
        age = a; 
        gender = g; 
    }

    // Copy Constructor
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // Destructors (They are called when any object is destroyed)
    ~student(){ // "~" symbol is used to declare destructor, and no parameters are passed in destructor and nothing is returned by it
        cout<<"Destructor called"<<endl;
    }
    
    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){ 
        cout<<"Name - ";
        cout<<name<<endl;
        cout<<"Age - ";
        cout<<age<<endl;
        cout<<"Gender - ";
        cout<<gender<<endl;                  
    }
};

int main(){
    student a("Kohli", 35, 1);
    a.printInfo();

    student b;

    student c(a);

    return 0;
}

// in output,
// first parameterised constructor will be called,
// then default constructor will be called.
// then copy constructor will be called.
// and then destructor will be executed 3 times since we've declared 3 objects (student a, student b, student c)
// each and every object will be destroyed by the destructor