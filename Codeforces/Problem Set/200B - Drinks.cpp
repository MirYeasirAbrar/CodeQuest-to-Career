#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    long double result = 0;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        long double p; cin >> p;
        result += p/100;
    }
    cout << fixed << setprecision(12) << result*100/n << endl;
    return 0;
}