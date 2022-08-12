#include<iostream>
using namespace std;
// This class here does not represents the data, it represents a blueprint.
// This class will act as a model for the employee.
class Employee{
public:
    string Name;
    string Company;
    int Age;

// To decribe the behaviour of any employee (Eg. like he/she can introduce themselves)
// We will use a class method i.e a function inside the class Employee
    void IntroduceYourself(){
        cout<<"Name of the employee - "<<Name<<endl;
        cout<<"Company of the employee - "<<Company<<endl;
        cout<<"Age of the employee - "<<Age<<endl;
    }
};

int main(){
// Creating the instance/object of the above class.
    Employee employee1; // Eg:- int a = 2; 'int' is the datatype and 'a' is the variable name
                        // Similarly, 'Employee' is the user-defined datatype and 'employee1' is the variable of this user-defined type.
// Way to access the attributes/members of the Employee class.
    employee1.Name = "Hamza";                         
    employee1.Company = "Google";
    employee1.Age = 22;
    employee1.IntroduceYourself();

    return 0;
}