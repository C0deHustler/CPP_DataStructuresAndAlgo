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

    //impelmentation of a Work function in Employee class
    void Work(){
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
};

int main(){
    Developer d ("Kunal", "Microsoft", 45, "C++");
    Teacher t ("Mohini Mam", "Children's Academy", 50, "Hindi");
    // "Work" function is implemented in Employee class only
    cout<<"When Work Function is implemented in Employee class only - "<<endl;
    cout<<endl;
    d.Work();    //since "Work" function is implemented in "Employee" class, and "Developer" and "Teacher" class is inheriting from Employee class,
    t.Work();    // so, t.Work() and d.Work() will easily get executed

    return 0;
}

