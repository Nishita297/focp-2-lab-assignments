#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    int m, n, p, q;

cout << "enter no. of rows & columns for matrix 1 :";
cin >> m>>n;
cout << "enter no. of rows & columns for matrix 2 :";
cin >> p>>q;

if(n != p)
{ 
    cout << " matrix multiplication not possible";
}

int A[m][n], B[p][q], C[m][q];

cout << "enter elements for 1st matrix :\n";
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin >> A[i][j];
    }
}

cout << "enter elements for 2nd matrix :\n";
for(int i=0; i<p; i++){
    for(int j=0; j<q; j++){
        cin >> B[i][j];
    }
}

// resulted matrix
for(int i=0;i<m;i++)
    {for(int j=0;j<q;j++)
        {C[i][j]=0;
        }
    }

for(int i=0; i<m; i++){
    for(int j=0; j<q; j++){
        for(int k=0; k<n; k++){
            C[i][j] += A[i][k] * B[k][j];
        }
    }
}

cout<<"Result matrix:\n";

    for(int i=0;i<m;i++)
    {for(int j=0;j<q;j++)
        {cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

}