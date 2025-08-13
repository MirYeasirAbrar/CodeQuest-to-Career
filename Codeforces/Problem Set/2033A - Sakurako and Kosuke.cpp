#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

short n, t;
int main()
{
    for (cin >> t; t--; cin >> n, cout << (n & 1 ? "Kosuke\n" : "Sakurako\n"));
    return 0;
}