#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0; 
};
 
class Employee:AbstractEmployee{
private:
    string Company;
    int Age;

protected:
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

    //if we'll not use "virtual" keyword then e1.Work() and e2.Work() will access only Work() function of employee class i.e base class only
    // and we'll get this output - "checking email...."

    // but, by the use of "virtual" keyword,
    // it will check that whether same named function ,here, Work() function is implemented in any derived class or not,
    // and if yes, then it will execute the Work() function of derived class i.e. Developer and Teacher class instead.

    virtual void Work(){
        cout<<Name<<" is checking e-mails, checking backlogs, performing tasks."<<endl;
    }
};

class Developer:public Employee{     
public:
    string FavProgrammingLanguage;   
    
    Developer(string Naam, string Kaam, int Umr, string Bhaasha):Employee(Naam, Kaam, Umr){ 
        FavProgrammingLanguage = Bhaasha; 
    }
    
    void FixBug(){
        cout<<Name<<" works at "<<GetCompany()<<" and do the job of fixing the bugs in "<<FavProgrammingLanguage<<endl;
    }
    // Implementation of Work function in Developer class also.
    void Work(){
        cout<<Name<<" is writing code in "<<FavProgrammingLanguage<<" language."<<endl;
    } 
};


class Teacher: public Employee{ 
public:
    string Subject;
     
    Teacher(string Naam, string Kaam, int Umr, string Vishay):Employee(Naam, Kaam, Umr){
        Subject = Vishay;
    }
    
    void WorkOfTeacher(){
        cout<<Name<<" teaches at "<<GetCompany()<<" about "<<Subject<<endl;
    }
    // Implementation of Work function in Developer class also.
    void Work(){
        cout<<Name<<" is teaching "<<Subject<<" ."<<endl;
    }
};

int main(){
    Developer d ("Kunal", "Microsoft", 45, "C++");
    Teacher t ("Mohini Mam", "Children's Academy", 50, "Hindi");

    // Use of polymorphism,
    // when a parent class reference is used to refer to a child class object.
    // "Employee *e" is the parent class, and "&d" is a child class object and it is referring to it with the help of pointer "*" and "&".
    
    // Base class pointer to a derived class object
    Employee *e1 = &d; //Pointer e of type Employee referring to a child class object i.e &d
    Employee *e2 = &t; // same as above
    
    e1->Work();     // THUS, SAME FUNCTION, MANY OPERATIONS
    e2->Work();

    return 0;
}

// if Work function will be only in employee and developer class only and not in teacher class,
// then on running *e1 = &d and *e2 = &t, 
//as output, we'll get
// for *e1 (i.e. developer) we'll get "is writing code...."
// for *e2 (i.e. teacher) we'll get "is checking email..." 