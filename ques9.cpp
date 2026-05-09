#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;
int main(){ 
    char alpha;
        cout<<"enter a alphabet :";
        cin >> alpha;

    if(alpha == 'A' || alpha == 'a' || alpha == 'E' || alpha == 'e' || alpha == 'I' || alpha == 'i' || alpha == 'O' || alpha == 'o' || alpha == 'U' || alpha == 'u'){
        cout << "alpha is vowel";
    }
    else{
        cout << "alpha is consonant";
    }
}