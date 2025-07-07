#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> s;
        bool d = true;
        for (int i = 0; i < n; ++i) {
            int x;
            std::cin >> x;
            if (s.count(x)) {
                d = false;
            }
            s.insert(x);
        }
        cout << (d ? "YES" : "NO") << endl;
    
    }

    return 0;
}