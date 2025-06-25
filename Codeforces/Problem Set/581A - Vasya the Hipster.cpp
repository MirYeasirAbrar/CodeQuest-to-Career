#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int a, b; cin >> a >> b;

    int diffDay = min(a,b);
    int sameDay = (max(a,b) - diffDay) / 2;

    cout << diffDay << " " << sameDay << endl;
    return 0;
}