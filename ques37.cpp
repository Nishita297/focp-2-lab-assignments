#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    string username;
bool valid = true;

cout << "enter username :\n";
cin >> username;

for(int i=0; i<username.length(); i++){
    if(!isalnum(username[i]))   //  isalnum checks if character is alphabet or number
    {
         valid = false;
            break;
    }
}

if(valid)
        cout << "Username is valid";
    else
        cout << "Username is invalid";
/*
isalnum() = checks letter or digit
isalpha() = checks alphabet
isdigit() = checks number
*/

}