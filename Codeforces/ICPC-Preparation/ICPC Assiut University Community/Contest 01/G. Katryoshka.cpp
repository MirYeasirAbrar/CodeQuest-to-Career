#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    
    // Step 1: Maximize type 3 Katryoshkas (1 eye, 1 mouth, 1 body)
    long long x = min({n, m, k});
    
    // Step 2: Remaining eyes and bodies after using x type 3 Katryoshkas
    long long remaining_eyes = n - x;
    long long remaining_bodies = k - x;
    
    // Step 3: Maximize type 1 Katryoshkas (2 eyes, 0 mouths, 1 body)
    long long y = min(remaining_eyes / 2, remaining_bodies);
    
    // Step 4: Total Katryoshkas
    long long total = x + y;
    
    cout << total << endl;
    
    return 0;
}