#include <bits/stdc++.h>
using namespace std;

string to_binary(int n) {
    string res;
    if (n == 0) return "0";
    while (n > 0) {
        res += (n % 2) + '0';
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

bool is_palindrome(const string& s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "NO\n";
        return 0;
    }

    string bin = to_binary(n);
    if (is_palindrome(bin)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}