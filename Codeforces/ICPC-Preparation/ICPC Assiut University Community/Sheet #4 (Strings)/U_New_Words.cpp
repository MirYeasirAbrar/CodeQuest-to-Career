#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s; cin >> s;
    map<char, int> freq;
    for (auto c : s) {
        freq[tolower(c)]++;
    }
    int count = INT_MAX;
    for (char c : string("egypt")) {
        count = min(count, freq[c]);
    }
    cout << count << endl;
    return 0;
}