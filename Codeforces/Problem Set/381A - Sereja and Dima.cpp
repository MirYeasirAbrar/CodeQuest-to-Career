#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int l = 0, r = n-1;
    int ss = 0, ds = 0;
    bool turn = true;

    while(l <= r){
        int sum = 0;
        if(a[l] > a[r]){
            sum = a[l];
            l++;
        }
        else{
            sum = a[r];
            r--;
        }
        
        turn ? ss += sum : ds += sum;
        turn = !(turn);
    }

    cout << ss << " " << ds << endl;
    return 0;
}