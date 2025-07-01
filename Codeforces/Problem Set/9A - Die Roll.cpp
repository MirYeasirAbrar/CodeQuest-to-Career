#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int a, b; cin >> a >> b;
    if(a < b) swap(a,b);
    int cnt = 0;
    for(int i=a; i<=6; i++){
        cnt++;
    }
    int tcnt = 6;
    int divisor = gcd(cnt, tcnt);

    cout << cnt/divisor << "/" << tcnt/divisor << endl;
    return 0;
}