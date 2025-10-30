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
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll c = 1;
        for (ll i = 0; i < n; i++)
        {
            while (arr[i] % 2 == 0 && arr[i] != 0)
            {
                c *= 2;
                arr[i] /= 2;
            }
        }
        sort(arr, arr + n);
        arr[n - 1] *= c;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}