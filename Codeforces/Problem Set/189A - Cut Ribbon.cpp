#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, a, b, c, count = 0;
    
    cin >> n >> a >> b >> c;

    for(int i=0; i*a <= n; i++){
        for(int j=0; i*a + j*b <= n; j++){
            int k = (n - i*a - j*b) / c;
            if (i*a + j*b + k*c == n){
                count = max(i + j + k, count);
            }			
        }
    }

    cout << count << endl;
    return 0;
}