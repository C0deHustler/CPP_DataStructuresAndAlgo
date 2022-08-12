#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0; 
};
 
class Employee:AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;

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
//Inheritance
class Developer:Employee{ //":" use this to inherit properties from base class
public:
    string FavProgrammingLanguage;//new data member for Developer Class

    // Since we've created our own parameterized constructor earlier, so the default constructor will not be envoked and error will be shown,
    // so we've to create a parameterized constructor
    Developer(string Naam, string Kaam, int Umr, string Bhaasha):Employee(Naam, Kaam, Umr){ // ":" use this to inherit the attributes of employee class here, no need to rewrite Name=Naam and Company=Kaam
        FavProgrammingLanguage = Bhaasha; // Do this only since it's new and can't be inherited
    }
    // A new method for Developer class
    void FixBug(){
        cout<<GetName()<<" works at "<<GetCompany()<<" and do the job of fixing the bugs in "<<FavProgrammingLanguage<<endl;
    } // GetName() i.e getter will be used since attribites of Employee Class is encapsulated
      // if we'll use only "Name" then error will be shown since it's private and encapsulated.
};

int main(){
    Developer d ("Kunal", "Microsoft", 45, "C++");
    d.FixBug();

    return 0;
}

