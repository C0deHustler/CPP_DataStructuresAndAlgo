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
// Declaration of a Constructor
public:
    Employee(string Naam, string Kaam, int Umr){
        Name = Naam;
        Company = Kaam;
        Age = Umr;
    } // As soon as we create our own Constructor, we'll lose the default constructor
      // which will show error in employee1 and employee2,
      // so we'll declare parameters in employee1 and employee2 in main function.
};

int main(){
// Creating the instance/object of the above class.
    Employee employee1 = Employee("Hamza", "Google", 22); //
                    
// Way to access the attributes/members of the Employee class.
    // employee1.Name = "Hamza";                         
    // employee1.Company = "Google";
    // employee1.Age = 22;
    employee1.IntroduceYourself();
    cout<<endl;

// Storing information about any another employee
    Employee employee2("Mark", "Facebook", 35);
    // employee2.Name = "Mark";
    // employee2.Company = "Facebook";
    // employee2.Age = 35;
    employee2.IntroduceYourself();    
// But as seen above, we're unnecessarily repeating code,
// Thus the concept of constructors are used.
    return 0;
}