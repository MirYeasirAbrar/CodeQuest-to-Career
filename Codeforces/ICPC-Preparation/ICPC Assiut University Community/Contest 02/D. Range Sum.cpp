#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long l, r;
        cin >> l >> r;
        
        long long start = min(l, r);
        long long end = max(l, r);
        
        long long count = end - start + 1;
        long long sum = (count * (start + end)) / 2;
        
        cout << sum << endl;
    }
    
    return 0;
}