#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int k; cin >> k;
    for (int i = 1; ; i++){
			if (i % 3 == 0 || i % 10 == 3)
				continue;
			if (--k == 0){
				cout << i << '\n';
				break;
			}
		}    
    }

    return 0;
}