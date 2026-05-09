#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std; 

int main(){
     int n, num, largest;

    cout << "Enter number of sales entries: ";
    cin >> n;

    cout << "Enter the numbers: ";
    cin >> largest;  // assume first number as largest

    for(int i = 2; i <= n; i++)
    {
        cin >> num;

        if(num > largest)
        {
            largest = num;
        }
    }

    cout << "Largest sales figure is: " << largest;
 
    return 0;
}