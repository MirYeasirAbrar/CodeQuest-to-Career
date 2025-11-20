#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << (b % a ? lcm(a, b) : b * (b / a)) << endl;
    }

    return 0;
}