#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    int num[5];
int oddsum = 0, evensum = 0;

// input numbers
cout << "enter numbers :\n";
for(int i=0; i<5; i++){
    cin>>num[i];
}

// check even or odd
for(int i=0; i<5; i++){
    if(num[i] % 2 == 0)
    {
        evensum = evensum + num[i];
    }
    else{
        oddsum = oddsum + num[i];
    }
}

// display result
cout << "sum of even numbers :"<< evensum << endl;
cout << "sum of odd numbers :"<< oddsum << endl;
}