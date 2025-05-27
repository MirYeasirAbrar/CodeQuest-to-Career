#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a == b)
        cout << "yes\n";
    else
        cout << "no\n";
    return 0;
}