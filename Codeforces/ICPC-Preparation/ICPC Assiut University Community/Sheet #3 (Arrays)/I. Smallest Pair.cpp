#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector <long long> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector <long long> sum;
        for(int i=1; i<n; i++){
            for(int j=i+1; j<=n; j++){
                sum.push_back(a[i-1] + a[j-1] + j - i);
            }
        }
        long long min_sum = *min_element(sum.begin(), sum.end());
        cout << min_sum << endl;
    }
    return 0;
}