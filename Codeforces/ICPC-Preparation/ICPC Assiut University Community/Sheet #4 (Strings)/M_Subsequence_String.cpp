#include <bits/stdc++.h>
using namespace std;

bool subseq(string &a, string &b){
    int n = a.length(), m = b.length();

    int i=0, j=0;
    if(n>m) return false;

    while (i<n && j<m){
        if(a[i] == b[j]){
            i++;
        }
        j++;
    }
    return i == n;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s = "hello";
    string inp; cin >> inp;

    subseq(s, inp) ? cout << "YES" : cout << "NO";

    return 0;
}