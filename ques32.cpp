#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    
    int value[5];
int largest, Slargest;

cout <<"enter 5 stock values :\n";

for(int i =0; i<5; i++){
    cin >> value[i];
}

// assume 1st is largest or Slargest
largest = value[0];
Slargest = value[0];

for(int i=1; i<5; i++){
    if(value[i] > largest){
        Slargest = largest;
        largest = value[i];

    }
    else if(value[i] > Slargest && value[i] != largest){
        Slargest = value[i];
    }
}

cout << "largest :"<< largest<<endl;
cout << "Slargest :"<<Slargest<<endl;
}