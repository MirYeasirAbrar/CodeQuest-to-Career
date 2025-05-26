#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n; 

    for(int row = 1; row <= n; row++) {
        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        for(int col = 1; col <= (2 * row) - 1; col++) {
            cout << "*";
        }
        cout << endl;
    }

    for(int row = n-1; row >= 1; row--) {
        for(int space = n-row; space >= 1; space--) {
            cout << " ";
        }
        for(int col = (2 * row) - 1; col >= 1; col--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}