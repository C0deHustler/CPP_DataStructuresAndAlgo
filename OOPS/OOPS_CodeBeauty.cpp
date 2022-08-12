#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
    string name;
    string city;
    int age;

public:
    //Encapsulation
    //For accessing all those data mambers which are now private
    void setName(string Naam){ //Setter
        name = Naam;
    }
    string getName(){//Getter
        return name;
    }
    void setCity(string Sheher){ //Setter
        city = Sheher;
    }
    string getCity(){//Getter
        return city;
    }
    void setAge(int Umr){ //Setter
        if(Umr >= 18){//Validation Rules
        age = Umr;
        }
    }
    int getAge(){//Getter
        return age;
    }
    //Function for printing
    void introTime(){
        cout<<"Name is - "<<name<<endl;
        cout<<"City is - "<<city<<endl;
        cout<<"Age is - "<<age<<endl;
    }
    //Constructor
    Employee(string Naam, string Sheher, int Umr){
        name = Naam;
        city = Sheher;
        age = Umr;
    }
};

int main(){
    Employee employee1("Hamza","LMP",22);
    Employee employee2("Hammad","LKO",16);
    
    //employee1.introTime();
    //employee2.introTime();

    employee1.setName("Hasbullah");
    //employee1.setAge(8);  since we've applied the condition in setAge() so if we'll violate the condition then no changes will be applied
    employee1.setAge(55);
    cout<<employee1.getName()<<" is now "<<employee1.getAge()<<" years old."<<endl;
    return 0;
}