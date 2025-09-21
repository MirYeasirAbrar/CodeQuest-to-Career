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
        int N;
        cin >> N;
        cout << (N % 4 != 0 ? "Alice" : "Bob") << endl;
    }

    return 0;
}