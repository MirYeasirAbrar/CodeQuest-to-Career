#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int n;
    cin >> n;
    int weven = 0, wodd = 0;
    for (int i = 0; i < n; ++i){
        int temp; cin >> temp;
        if (i % 2 != temp % 2){
            (temp % 2 == 0) ? weven++ : wodd++;
        }        
    }

    cout << ((weven != wodd) ? -1 : weven) << endl;
    
    }

    return 0;
}