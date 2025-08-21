#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t; cin >> t;
 
    vector<string>a(510,"-1");
    a[2]="66";
    a[4]="3366";
    a[5]="36366";
    
    int i=6;
    while(i<502){
        a[i]="33"+a[i-2];
        i++;
    }
    while(t--){
    int n; cin >> n;
    cout << a[n] << endl;
    }
    return 0;
}