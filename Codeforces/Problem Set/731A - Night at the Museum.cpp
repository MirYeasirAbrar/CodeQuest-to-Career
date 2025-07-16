#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s;
    cin >> s;
    char prev = 'a';
    int r = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char curr = s[i];
        int right = abs(curr - prev);
        int left = abs(abs(curr - prev) - 26);
        r += min(right, left);
        prev = curr;
    }
    cout << r;
    return 0;
}