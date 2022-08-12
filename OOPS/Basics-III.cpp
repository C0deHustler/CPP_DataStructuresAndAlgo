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

    // (if we'll make objects and we'll not pass any parameters while making of that object, then default constructor will be called)
    // if we'll not make default constructor and then declare something like "student b;" in our main function, then it will show error
    // "default constructor" works automatically untill or unless any other constructor is not declared. But since we've already made "Parameterised constructor", then we need to declare "default constructor" by ourselves
    student(){
        cout<<"Default Constructor"<<endl;
    }

    // Parameterised Constructor

    student(string s, int a, bool g){// student = name of the class, string s = string type data by the user for storing name, int a = int type data by user for age, bool g = bool type data by user for gender
        cout<<"Parameterised Constructor"<<endl;
        name = s; // since we want to store that string in our data member "name"
        age = a; // since we want to store that int datatype in our data member "age"
        gender = g; // since we want to store that bool datatype in our data member "gender"
    }

    // Copy Constructor
    // they are of 2 types - 1) Default Copy Constructor  2) Self-Defined Copy Constructor
    
    student(student &a){ // declare student within student since we want to store values of "a" in "c" along with their address that's why use "&" before "a"
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    
    
    // Function for printing the data member(i.e name) outside the class since "name" is private
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
    // in Basics-I we've seen that first we made different instances for "student" and then for every instance, we allocated some value in each data member.
    // but what if we want to specify any value to an object of class "student" at the same place, then we'll use the concept of constructor.
    // Whenever we make an object for any class, then constructor get called everytime by default.

    student a("Kohli", 35, 1);// we want to allocate "Kohli" to object "a" of class "student", (Parameterised constructor will be called)
    // a.getName(); // function for printing values of private data member and we are accessing it from outside the class, this can be used if we wanted to print only data member "name",
    // since we've declared the getname() function for accessing and printing data member "name" only. But here we're going to print all data member i.e "age", "gender".
    // So we'll use printInfo() function
    //a.printInfo();

    student b; // Default constructor will be called since no parameters have been passed.

    student c(a); // if we want to store all values of "a" into "c", then use copy constructor  // we can also write " student c = a;"    // Copy Constructor will be called
    return 0;
}

// in output,
// first parameterised constructor will be called,
// then default constructor will be called.
// then copy constructor will be called