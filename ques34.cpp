#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    int mat[3][3];
int sum1 =0, sum2 =0;

cout << "enter values :\n";

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin >> mat[i][j];

        sum1 = sum1 + mat[i][j];
    }
}

int mat2[3][3];

cout<< "enter values for mat 2 :\n";

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin >> mat[i][j];

        sum2 = sum2 + mat[i][j];
    }
}

cout << "sum of matrix 1 :\n"<<sum1;
cout << "sum of matrix 2 :\n"<<sum2;

cout << sum1 + sum2;

}