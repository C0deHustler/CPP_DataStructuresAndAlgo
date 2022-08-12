#include<iostream>
using namespace std;
int main(){
    //Same code as for declaration
    int n,m;
    cout<<"Enter number of rows and columns- ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements of matrix - ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your matrix is - "<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Searching code starts from here
        int key;
        cout<<"Enter the element to be searched - ";
        cin>>key;

        bool flag=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j] == key){
                    cout<<"Your element is - "<<arr[i][j]<<"\n";
                    cout<<"It's location - "<<i<<" "<<j<<endl;
                    flag=true;
                }
            }
        }
        if(flag){
            cout<<"We have found your element.";
        }
        else{
            cout<<"Element not found";
        }
        return 0;
}