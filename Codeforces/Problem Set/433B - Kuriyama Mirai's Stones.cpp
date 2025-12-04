#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

vector<ll> a, st, b, la;
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n;
    cin >> n;
    a.resize(n + 1);
    st.resize(n + 1);
    b.resize(n + 1);
    la.resize(n + 1);
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
        st[i] = st[i - 1] + a[i];
    b = a;
    sort(b.begin(), b.end());
    for (ll i = 1; i <= n; i++)
        la[i] = la[i - 1] + b[i];
    ll q;
    cin >> q;
    while (q--)
    {
        ll r, l, c;
        cin >> c >> l >> r;
        if (c == 1)
            cout << st[r] - st[l - 1] << endl;
        else
        {
            cout << la[r] - la[l - 1] << endl;
        }
    }
    return 0;
}