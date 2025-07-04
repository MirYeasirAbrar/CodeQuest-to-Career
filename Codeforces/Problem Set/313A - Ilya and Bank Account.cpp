#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    stringstream ss;
    ss << n;
    string v = ss.str();
    int a = v[v.length() - 1];
    int b = v[v.length() - 2];

    if(a > b)
        v.erase(v.begin() + (v.length() - 1));
    else
        v.erase(v.begin() + (v.length() - 2));

    int r;
    istringstream convert(v);
    convert >> r;

    cout << ((n >= 0) ? n : r) << endl;
    return 0;
}