#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Sort in descending order
        sort(A.begin(), A.end(), greater<int>());

        unordered_set<int> alexUsed, bobUsed;

        long long alex = 0, bob = 0;
        bool alexTurn = true;

        for (int i = 0; i < N; i++) {

            if (alexTurn) {
                // Alex picks if not used before
                if (alexUsed.find(A[i]) == alexUsed.end()) {
                    alex += A[i];
                    alexUsed.insert(A[i]);
                    alexTurn = false; // switch turn
                }
            } else {
                // Bob picks if not used before
                if (bobUsed.find(A[i]) == bobUsed.end()) {
                    bob += A[i];
                    bobUsed.insert(A[i]);
                    alexTurn = true; // switch turn
                }
            }
        }

        if (alex > bob)
            cout << "Alex\n";
        else
            cout << "Bob\n";
    }

    return 0;
}