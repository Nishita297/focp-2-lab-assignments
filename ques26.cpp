#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std; 
int main(){

int arr[5];
int total=0;
float percentage;

// input marks
cout << "enter marks of student :\n";
for(int i=0; i<5; i++){
    cin >> arr[i];
    total += arr[i];
}

// calculate percentage
percentage = (total/ 500.0)*100;

// output results
cout << "\nTotal marks :"<< total;
cout << "\nPercentage :"<< percentage<<"%";
}