#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    int a[] = {1,5,10,20,100};
    int total = 0;

    for(int i=4; i>=0; i--){
        total += n/a[i];
        n %= a[i];
    }
    cout << total << endl;
    return 0;
}