#include<iostream>
using namespace std;
class Test{
public:
    int Maths;
    void funcM(){
        cout<<"Mathematics"<<endl;
    }

    void printMarks(){
    cout<<"Total marks obtained in Maths - ";
    cout<<Maths<<endl;
}
private:
    int SSt;
    void funcS(){
        cout<<"Social Studies"<<endl;
    }
protected:
    int Eng;
    void funcE(){
        cout<<"English"<<endl;
    }


};

int main(){
    Test Hamza_Score;
    Hamza_Score.funcM(); // on running, "Mathematics" will be printed as access modifier of funcM is public
    // marks.funcS();  // it will show error as access modifier of funcS is private
    // marks.funcE();  // it will also show error as access modifier of funcE id protected
    
    Hamza_Score.Maths = 56;
    Hamza_Score.printMarks();

}