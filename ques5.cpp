#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
     int n;
    float basic, bonus, net;

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "\nEmployee " << i << endl;
        cout << "Enter basic salary: ";
        cin >> basic;

        bonus = 0.12 * basic;
        net = basic + bonus;

        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << net << endl;
    }

}