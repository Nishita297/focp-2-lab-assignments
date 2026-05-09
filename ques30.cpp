#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    int salary[10];
int total=0;
float average;

cout <<"enter salary:\n";

for(int i=0; i<10; i++){
    cin >> salary[i];

    total = total + salary[i];


average = (total/1000.0)*100.0 ;
}

// display result
cout << "total salary :"<<total<<endl;
cout << " average :"<<average<<endl;

}