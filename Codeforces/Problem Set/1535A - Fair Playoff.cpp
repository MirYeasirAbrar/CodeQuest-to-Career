#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while (t--)
    {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        int win1 = max(s1, s2);
        int loss1 = min(s1, s2);
        int win2 = max(s3, s4);
        int loss2 = min(s3, s4);
        cout << ((loss1 <= win2 && loss2 <= win1) ? "YES" : "NO") << endl;       
    }

    return 0;
}