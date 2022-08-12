#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s;
	cin>>s;

	sort (s.begin(), s.end() );            //string gets sorted

	int count = 1;  
    int max=0; 
    int index=0;
	
	for(int i=0; i<s.length(); i++){        //loop btw the range of the string
		while(s[i] == s[i+1]){              //since string is now sorted, so if consecutive letters are same then,
			count = count + 1;              //keep incrementing the counter
			                                	
            if(count>max){                  //if we found a new maximum continuous streak
				max = count;                //update count as maximum
				index = i;                  //it's location
		    }
		    i++;                            //incrementer for while loop
		}
		count = 1;                          //reset the count to 1 once we found a new letter in the string
	}
	
 	cout<<max<<" "<<s[index];
    return 0;
}