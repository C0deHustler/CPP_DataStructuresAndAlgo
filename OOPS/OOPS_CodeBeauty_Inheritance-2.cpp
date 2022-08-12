#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0; 
};
 
class Employee:AbstractEmployee{
private:
    string Company;
    int Age;

protected: // Since we've declared "string Name" under protected, now we don't need Getter to access this attribute  
    string Name;

public:
    //Setter
    void SetName(string Naam){
        Name = Naam;
    }
    //Getter
    string GetName(){
        return Name;
    }
    //Setter
    void SetCompany(string Kaam){ 
        Company = Kaam;
    }
    //Getter
    string GetCompany(){
        return Company;
    }
    //Setter
    void SetAge(int Umr){
        if(Umr>=18){
            Age = Umr;
        }
    }
    //Getter
    int GetAge(){
        return Age;
    }
     
    void IntroduceYourself(){
        cout<<"Name of the employee is - "<<Name<<endl;
        cout<<"Company of the employee is - "<<Company<<endl;
        cout<<"Age of the employee is - "<<Age<<endl;
    }
    
    Employee(string Naam, string Kaam, int Umr){
        Name = Naam;
        Company = Kaam;
        Age = Umr;
    } 
    
    void AskForPromotion(){ 
        if(Age > 30){
            cout<<Name<<" got promoted."<<endl;
        }
        else{
            cout<<Name<<" ,sorry! No promotion for you."<<endl;
        }
    }
};

//Inheritance                        // class Developer: Employee{}  - This inheritance is private by default(Data members and member function under private scope can be accessed only) i.e. if we'll try access AskForPromotion() function  then it can't be accessed,
                                      // but by making it public - class Developer: public Employee{}, we can access all member functions (AskForPromotion() is declared under public scope)
class Developer:public Employee{     //":" use this to inherit properties from base class
public:
    string FavProgrammingLanguage;   //new method for Developer Class
    // Parameterized Constructor
    Developer(string Naam, string Kaam, int Umr, string Bhaasha):Employee(Naam, Kaam, Umr){ // ":" use this to inherit the attributes of employee class here, no need to rewrite Name=Naam and Company=Kaam
        FavProgrammingLanguage = Bhaasha; // Do this only since it's new and can't be inherited
    }
    // A new method for Developer class
    void FixBug(){
        cout<<Name<<" works at "<<GetCompany()<<" and do the job of fixing the bugs in "<<FavProgrammingLanguage<<endl;
    } // "Name" can be used to access this attribute, no need to use GetName(), since Name is in the "protected" scope now.
};

// Another class for showing multiple inheritance.
class Teacher: public Employee{ // now class teacher can access all public data members and member functions of Class Employee, by default they stay private
public:
    string Subject;
    // Creation of a constructor 
    Teacher(string Naam, string Kaam, int Umr, string Vishay):Employee(Naam, Kaam, Umr){
        Subject = Vishay;
    }
    // Member Function
    void WorkOfTeacher(){
        cout<<Name<<" teaches at "<<GetCompany()<<" about "<<Subject<<endl;
    }
};

int main(){
    Developer d ("Kunal", "Microsoft", 45, "C++");
    d.FixBug();
    d.AskForPromotion();// accessible only when we'll use "public" while declaring inheritance

    Teacher x ("Mohini Mam", "Children's Academy", 50, "Hindi");
    x.WorkOfTeacher();
    x.AskForPromotion();
    return 0;
}

