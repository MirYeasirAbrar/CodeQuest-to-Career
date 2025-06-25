#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    vector<int> x(4);
    for(int i=0; i<4; i++) cin >> x[i];
    sort(x.begin(), x.end());

    cout << x[3] - x[0] << " " << x[3] - x[1] << " " << x[3] - x[2] << endl;    
    return 0;
}