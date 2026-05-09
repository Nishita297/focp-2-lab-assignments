#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    int arr1[5];

cout << "enter 5 values :";
for(int i =0; i<5; i++){
    cin >> arr1[i];
}
     if(arr1[5] % 3 == 0 && arr1[5] % 5 == 0)
         cout << "divisible by both 3 and 5";
    else
        cout << "not divisible by both 3 and 5";


    return 0;  
}