#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];//declaration of 1st matrix
    int m2[n2][n2];//declaration of 2nd matrix
    cout<<endl;

    for(int i= 0;i<n1;i++){//input values for 1st matrix
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<n2;i++){//input values for 2nd matrix
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }
    cout<<endl;

    int ans[n1][n3];//declaration of answer matrix
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){//since ans matrix will be of order n1*n3
            ans[i][j]=0;
        }
    }
    //main logic for multiplication
    for(int i=0;i<n1;i++){                 
        for(int j=0;j<n3;j++){            //logic for all these 3 in register
            for(int k=0;k<n2;k++){
                ans[i][j] += m1[i][k] * m2[k][j];//since M1(col) must be equal to M2(row) so we are using k in such a way
            }
        }
    }
    //printing ans matrix
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){          //n1 and n3 since answer matrix will be of order n1*n3
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}