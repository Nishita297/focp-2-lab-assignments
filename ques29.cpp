#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    int temp[30];
int min;

cout << " enter temp :\n";
// input temperature
for(int i=0; i <30; i++){
    cin >> temp[i];
}

// assume first temp is minimum
min = temp[0];

// for minimum temperature
for(int i=1; i<30; i++){
    if(temp[i] < min){
        min = temp[i];
    }
}

// display result 
cout <<" minimum temp is:"<< min;


}