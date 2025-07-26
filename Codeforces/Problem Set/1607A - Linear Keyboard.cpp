#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
const long long N = 2e5 + 5;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    long long a[N];
        int t1 = 1, ans = 0;
        string s1, s2; cin >> s1 >> s2;
        for(int i = 0; i < s2.size(); i++){
            for(int j = 1; j <= s1.size(); j++){
                if(s2[i] == s1[j - 1]){
                    a[t1] = j;
                    t1++;
                    break;
                }
            }
            if(t1 > 2) ans += abs(a[t1 - 1] - a[t1 - 2]);
        }
        cout << ans << endl;
    
    }

    return 0;
}