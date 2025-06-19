#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, a; cin >> n;
    int mp[5];
    memset(mp, 0, sizeof(mp));

    for(int i=0; i<n; i++){
        cin >> a;
        mp[a]++;
    }

    int ans = 0;
    ans  += mp[4] + mp[3] + (mp[2]/2);
    mp[1] -= min(mp[3],mp[1]);
	if (mp[2] & 1)
	{
		mp[1] -= min(2, mp[1]);
		ans ++;
	}
	ans += (mp[1] + 3) / 4;

    cout << ans << endl;

    return 0;
}