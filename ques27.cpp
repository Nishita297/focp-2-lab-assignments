#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    int price[10];
int max;

// input prices 
cout << "enter prices of 10 items :\n";
for(int i =0; i<10; i++){
    cin >> price[i];
}

// assume first element is maximum
max = price[0];

// find maximum price 
for(int i =1; i<10; i++){
    if(price[i]> max){
        max = price[i];
    }
}

// display result
cout << "maximum price is :"<< max;
}