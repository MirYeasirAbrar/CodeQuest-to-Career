#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n; cin >> n; 
    string s; cin >> s;

    vector<int> freq(26, 0);
    for(char c : s){
        freq[c - 'A']++;
    }

    int count = 0;
    for(int i=0; i<26; i++){
        if(freq[i] > 0){
            count += freq[i] + 1;
        }
    }
    cout << count << '\n';    
    }

    return 0;
}