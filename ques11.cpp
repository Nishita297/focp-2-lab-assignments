#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    int items;
    float price, total, discount = 0;

    cout << "Enter number of items: ";
    cin >> items;

    cout << "Enter price per item: ";
    cin >> price;

    total = items * price;

    // Apply 10% discount if items > 1000
    if (items > 1000) {
        discount = total * 0.10;
        total = total - discount;
    }

    cout << "Total expense after discount: " << total << endl;

}