#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    int a, b, temp;
    cout<<"enter two numbers:";
    cin>>a>>b;

    cout<<"\nbefore swapping:\na ="<<a<<"b ="<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"after swapping:\na ="<<a<<"b ="<<b<<endl;
}