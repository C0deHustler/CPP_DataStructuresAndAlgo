#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1="mahendra singh dhoni";
    cout<<'a'-'A'<<endl;//i.e 'a' is 32 ahead of 'A',
                        //to convert lower case into upper case, we'll make lower case letters backward by 32 units. 
    
    //1 - By using loop method

    //Lower case into Upper case letters

    for(int i=0; i<s1.size(); i++){
        if(s1[i]>='a' && s1[i]<='z'){//if range is btw a to z.
            s1[i] -= 32;//subtract 32 from each letter
        }
    }
    cout<<s1<<endl;

    //Upper case into Lower case letters

    string s2="VIRAT KOHLI";
    for(int i=0; i<s2.size(); i++){
        if(s2[i]>='A' && s2[i]<='Z'){//if range is btw A to Z.
            s2[i] += 32;//add 32 for each letter
        }
    }
    cout<<s2<<endl;

    //2 - By using function

    //Lower case into Upper case

    string s3="sachin tendulkar";
    transform (s3.begin(), s3.end(), s3.begin(), :: toupper);//tranform function
                                                             //we have to pass the whole string from beginning to ending iterator, so
    cout<<s3<<endl;                                          //s3.begin() for starting iterator and s3.end() for ending iterator
                                                             //again s3.begin() at 3rd position in function specifies the position from where we want to tranform our string, we can change this position as per our choice
                                                             //::tolower for converting upper case to lower case 
    
    //Upper case to Lower case

    string s4="LOKESH RAHUL";
    transform (s4.begin(), s4.end(), s4.begin(), ::tolower);//::toupper for converting upper case to lower case

    cout<<s4<<endl;

    return 0;
}