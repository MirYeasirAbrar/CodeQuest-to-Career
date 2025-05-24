#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;

    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    int cnt = 1;
    for(int i=0; i<n-1; i++){
        if(s[i] != s[i+1]){
            cnt++;
        }                
    }
    cout << cnt << '\n';



    return 0;
}