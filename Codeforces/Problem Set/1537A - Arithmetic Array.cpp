#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t, length, x, sum = 0;
    cin >> t;
    while (t--)
    {
        cin >> length;
        sum = 0;
        for (int i = 0; i < length; i++)
        {
            cin >> x;
            sum += x;
        }
        if (sum < length)
            cout << 1 << "\n";
        else
            cout << sum - length << "\n";
    }
    return 0;
}