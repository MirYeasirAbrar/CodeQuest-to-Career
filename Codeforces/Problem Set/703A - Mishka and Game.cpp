#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(3,0);

    while(n--){
        int x, y;
        cin >> x >> y;

        if(x>y) a[1]++;
        else if(x<y) a[2]++;
    }

    if(a[1] > a[2]) cout << "Mishka" << endl;
    else if(a[2] > a[1]) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}