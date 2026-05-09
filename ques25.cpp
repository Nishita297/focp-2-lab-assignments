#include <iostream>
using namespace std;

int main() {
    int a, b, i, j, count;

    cout << "Enter two limits: ";
    cin >> a >> b;

    for(i = a; i <= b; i++) {
        count = 0;
        for(j = 1; j <= i; j++) {
            if(i % j == 0)
                count++;
        }
        if(count == 2)
            cout << i << " ";
    }

    return 0;
}