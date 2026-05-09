#include <iostream>
#include <cmath> // Required for M_PI and pow()
#include <iomanip> // Required for setting decimal precision

using namespace std;

int main() {
    double radius, area;

    cout << "--- Fountain Space Calculator ---" << endl;
    cout << "Enter the radius of the circular fountain (in meters): ";
    cin >> radius;

    // Check for valid input
    if (radius < 0) {
        cout << "Error: Radius cannot be negative." << endl;
    } else {
        // Area calculation: π * r^2
        area = M_PI * pow(radius, 2);

        // Output the result formatted to 2 decimal places
        cout << fixed << setprecision(2);
        cout << "The total area covered by the fountain is: " << area << " square meters." << endl;
    }

    return 0;
}