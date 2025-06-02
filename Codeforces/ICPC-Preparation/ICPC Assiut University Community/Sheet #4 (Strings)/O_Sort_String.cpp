#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    cin >> N;

    int count[26] = {0};
    char c;
    for (int i = 0; i < N; i++) {
        cin >> c;
        count[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        while (count[i] > 0) {
            cout << (char)('a' + i);
            count[i]--;
        }
    }
    cout << endl;
    return 0;
}

