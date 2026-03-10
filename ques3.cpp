#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice;
    double temp, convertedTemp;

    cout << "--- Weather App: Temperature Converter ---" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Select conversion type (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        convertedTemp = (temp - 32.0) * 5.0 / 9.0;
        cout << fixed << setprecision(1);
        cout << temp << "°F is equal to " << convertedTemp << "°C" << endl;
    } 
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        convertedTemp = (temp * 9.0 / 5.0) + 32.0;
        cout << fixed << setprecision(1);
        cout << temp << "°C is equal to " << convertedTemp << "°F" << endl;
    } 
    else {
        cout << "Invalid selection. Please run the program again." << endl;
    }

    return 0;
}