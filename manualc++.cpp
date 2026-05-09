#include <iostream>
using namespace std;

class CarRental {
private:
    double dailyRate;
    int days;
    double totalCost;

public:

    // 1️ Constructor for one day rental
    CarRental(double rate) {
        dailyRate = rate;
        days = 1;
        totalCost = dailyRate * days;
        cout << "Rental for 1 day created." << endl;
    }

    // 2️ Constructor for multiple days rental
    CarRental(double rate, int d) {
        dailyRate = rate;
        days = d;
        totalCost = dailyRate * days;
        cout << "Rental for " << days << " days created." << endl;
    }

    // 3️ Constructor with discount
    CarRental(double rate, int d, double discountPercent) {
        dailyRate = rate;
        days = d;
        double discount = (rate * d) * (discountPercent / 100);
        totalCost = (rate * d) - discount;
        cout << "Rental with discount applied." << endl;
    }

    // Display function
    void display() {
        cout << "Daily Rate: " << dailyRate << endl;
        cout << "Number of Days: " << days << endl;
        cout << "Total Cost: " << totalCost << endl;
        cout << "------------------------" << endl;
    }
};

int main() {

    // Object 1 → One day rental
    CarRental r1(1000.0);
    r1.display();

    // Object 2 → Multiple days rental
    CarRental r2(1000.0, 5);
    r2.display();

    // Object 3 → Rental with discount
    CarRental r3(1000.0, 5, 10.0);
    r3.display();

    return 0;
}