#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of digits
    
    string digits;
    cin >> digits;  // Read the digits as a string
    
    long long sum = 0;  // Use long long to handle large sums
    for(int i = 0; i < n; i++) {
        sum += digits[i] - '0';  // Convert each char to int and add
    }
    
    cout << sum << endl;
    return 0;
}