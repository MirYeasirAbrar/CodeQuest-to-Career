#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[200001] = {0};
        while (n--)
        {
            int x;
            cin >> x;
            cout << char('a' + arr[x]);
            arr[x]++;
        }
        cout << endl;
    }
    return 0;
}