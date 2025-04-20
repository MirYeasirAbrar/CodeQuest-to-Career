#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s;
    cin >> s;

    int sum = 0;
    for (char c : s) {
        sum += c - '0';
    }

    cout << sum << '\n';
    return 0;
}