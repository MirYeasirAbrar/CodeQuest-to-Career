#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while (t--)
    {
        long long sum1 = 0, sum2 = 0;
        int n; cin >> n;

        if (n % 4 != 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for (int i = 2; i <= n; i += 2){
                cout << i << " ";
                sum1 += i;
            }
            for (int i = 1; i < n - 2; i += 2){
                cout << i << " ";
                sum2 += i;
            }
            cout << sum1 - sum2 << "\n";
        }
    }

    return 0;
}