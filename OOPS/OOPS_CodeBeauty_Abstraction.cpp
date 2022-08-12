#include<iostream>
using namespace std;
// Creation of an abstract class i.e. this class will act as a contract for reassuring the conditions for giving promotion to the employees
class AbstractEmployee{
    
    virtual void AskForPromotion() = 0; // Now one rule, that whichever class wants to make a contract with Abstract Class then they have to provide implementaion for a conditional class i.e. here, AskForPromotion()
                                        // we'll use "virtual" keyword to make our function virtual(obligatory) i.e. if any other class decides to access Abstract Class then it has to implement a function
                                        // called AskForPromotion() and this will force other class which wants to access it to implement for the function AskForPromotion()   
    // AskForPromotion() is now a pure virtual function by the use of "virtual" keyword and "= 0".
};
// How can Employee Class make contract with AbstractEmployee class ?
// Ans- By the use of ":" (Inheritance) 
class Employee:AbstractEmployee{
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
    Employee(string Naam, string Kaam, int Umr){
        Name = Naam;
        Company = Kaam;
        Age = Umr;
    } 
    // If we will sign the contract of Employee Class with AbstractEmployee Class and will not create AskForPromotion() Function in it then error will keep showing.
    // Error will be - "....there is no overrider"
    void AskForPromotion(){ // Here we'll implement the conditions for giving promotion
        if(Age > 30){
            cout<<Name<<" got promoted."<<endl;
        }
        else{
            cout<<Name<<" ,sorry! No promotion for you."<<endl;
        }
    }
};

int main(){
    Employee employee1("Hamza", "Google", 22);

    Employee employee2("Mark", "Facebook", 35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
    return 0;
}

//  Thus we'd implemented a contract i.e an abstract class with rules
// Any other developer would come and directly use AskForPromotion Class without worrying 
//about the other complexities of the terms and conditions used behind giving promotion.