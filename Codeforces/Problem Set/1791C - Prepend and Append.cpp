#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    long long n; cin >> n;
    string s; cin >> s;
    long long left(0), right(s.size()-1);

    while((left < right) && s[left] != s[right]){
        left++; right--;
    }
    cout << (right - left + 1) << endl;    
    }

    return 0;
}