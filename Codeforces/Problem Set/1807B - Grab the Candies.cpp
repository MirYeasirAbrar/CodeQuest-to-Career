#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    ll n;
    cin >> n;

    ll evenSum = 0, oddSum = 0;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;

        if (t & 1)
            oddSum += t;
        else
            evenSum += t;
    }   

    if (evenSum > oddSum)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    }

    return 0;
}