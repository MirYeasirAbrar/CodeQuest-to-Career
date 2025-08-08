#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

int main()
{
	cin.tie(nullptr)->sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		int o = 0, e = 0;
		for (int i = 0; i < n; i++){
			cin >> v[i];

			if (v[i] % 2 == 0){
				e++;
			}
			else{
				o++;
			}
		}

		if (o == 0 or (n == k and o % 2 == 0) or (o == n and k % 2 == 0)){
			cout << "No" << "\n";
		}
		else{
			cout << "Yes" << "\n";
		}
	}
	return 0;
}