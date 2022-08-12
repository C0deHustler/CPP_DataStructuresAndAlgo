#include<iostream>
using namespace std;

class Employee{
private: // These 3 methods are now encapsulated with the help of 'private:'
         // and can't be accessed from outside this class
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
        return Name; // return Name ( Minute detail to be observed)
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
//public: 
    Employee(string Naam, string Kaam, int Umr){
        Name = Naam;
        Company = Kaam;
        Age = Umr;
    } 
};

int main(){
    Employee employee1("Hamza", "Google", 22);
    employee1.IntroduceYourself();
    cout<<endl;

    Employee employee2("Mark", "Facebook", 35);
    employee2.IntroduceYourself();
    cout<<endl;
    // Since now methods are now private, we'll use setters and getters to access them
    employee2.SetCompany("Amazon");
    cout<<employee2.GetName()<<" now works in the "<<employee2.GetCompany()<<"."<<endl;
    
    employee1.SetAge(11);// we're setting age=11 which is not greater than 18, thus condition not true.
    cout<<employee1.GetName()<<" is now "<<employee1.GetAge()<<endl;// in output, we'll get age of hamza as 22 only, not 11.
    return 0;
}