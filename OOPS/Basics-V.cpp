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

    // Destructors
    ~student(){ 
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

    bool operator == (student &a){ // since we want to compare it with "a"
        if(name == a.name && age == a.age && gender == a.gender){ // 'name','age','gender' refers to the name,age,gender of the second operand i.e."c"
            return true;
        }
        return false;
    } // now we've overloaded our "==" operator
};

int main(){
    student a("Kohli", 35, 1);
    a.printInfo();

    student b("Sachin", 45, 1);

    student c(a);

    // if we want to check that values of "c" is equal to "a" or not. 
    if (c == a){ // in above function, we've to declare that what we're expecting from "==" operators, and thus we'll use the concept of "Operator Overloading", since we want the "==" operator to behave in a certain way
        cout<<"Same"<<endl; // we'll do operator overloading in "operator" function
    }
    else{
        cout<<"Not same"<<endl;
    }// output will be "same", because we've alerady made c==a by using copy constructor

    
    
    if(b == a){
        cout<<"Same hi hai bhai"<<endl;
    }
    else{
        cout<<"Ye wala same nahi hai bhai"<<endl;
    }

    return 0;
}

