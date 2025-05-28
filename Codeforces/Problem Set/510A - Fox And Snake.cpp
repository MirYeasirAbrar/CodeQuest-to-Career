#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int r, c; cin >> r >> c;

    for(int i = 0; i < r; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < c; j++) cout << "#";
        } else if(i % 4 == 1) {
            for(int j = 0; j < c - 1; j++) cout << ".";
            cout << "#";
        } else {
            cout << "#";
            for(int j = 1; j < c; j++) cout << ".";
        }
        cout << '\n';
    }
    return 0;
}