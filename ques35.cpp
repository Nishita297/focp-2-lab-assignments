#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    int matrix[3][3];

cout << "enter values :\n";

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin >> matrix[i][j];
    }
}
cout << "\n ORIGINAL MATRIX :\n";

// display original matrix 

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout << matrix[i][j] <<" ";
    }
    cout << endl;
}
cout << "\n TRANSPOSE MATRIX :\n";

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout << matrix[j][i] << " ";
    }
    cout << endl;
}
}