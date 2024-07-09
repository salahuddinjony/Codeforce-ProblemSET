#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    int n;
    cin >> n;

    // Print upper part of the pattern
    for (int i = 0; i <= n; i++) {
        // Print leading spaces to center the triangle
        for (int sp = 0; sp < n - i; sp++) {
            cout << "  "; // Two spaces for better alignment
        }

        // Print increasing part of the pattern
        for (int j = 0; j <= i; j++) {
            if (j > 0) cout << " "; // Space between numbers
            cout << j;
        }

        // Print decreasing part of the pattern
        for (int j = i - 1; j >= 0; j--) {
            cout << " "; // Space between numbers
            cout << j;
        }

        cout << endl;
    }

    // Print lower part of the pattern
    for (int i = n - 1; i >= 0; i--) {
        // Print leading spaces to center the triangle
        for (int sp = 0; sp < n - i; sp++) {
            cout << "  "; // Two spaces for better alignment
        }

        // Print increasing part of the pattern
        for (int j = 0; j <= i; j++) {
            if (j > 0) cout << " "; // Space between numbers
            cout << j;
        }

        // Print decreasing part of the pattern
        for (int j = i - 1; j >= 0; j--) {
            cout << " "; // Space between numbers
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/