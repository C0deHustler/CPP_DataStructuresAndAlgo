#include<iostream>
#include<string>
using namespace std;
int main(){

    //Erase function

    string s1="nincompoop";

    s1.erase(3, 4);//3 is the starting index number and 4 is the range from it
    cout<<s1<<endl;

    //Find function

    string s2="Kookabura";
    cout<<s2.find("bur")<<endl;//"bur" will be available at index no. = 5

    //Insert function

    string s3="booming";
    s3.insert(4, "blastic");//it will insert "blastic" at index no. = 4
    cout<<s3<<endl;

    //Length function

    cout<<s3.size()<<endl;//cout<<s3.lenght()<<endl;  is also correct

    //Using loop to iterate over each character

    string s4="hamza";
    for(int i=0; i<s4.size() ; i++){
        cout<<s4[i]<<endl;
    }

    //Substring function

    string s5=("SteveSmithKing");
    string s6=s5.substr(5, 9);//5 for starting index and 9 for range
    cout<<s6<<endl;

    return 0;
}