#include <bits/stdc++.h>
using namespace std;

int find_max(int a[], int n){
    int max_num = a[0];

    for(int i=0; i<n; i++){
        if(max_num < a[i]){
            max_num = a[i];
        }
    }
    return max_num;
}

int find_min(int a[], int n){
    int min_num = a[0];

    for(int i=0; i<n; i++){
        if(min_num > a[i]){
            min_num = a[i];
        }
    }
    return min_num;
}

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    int max = find_max(a, n);
    int min = find_min(a, n);

    cout << min << " " << max << '\n';

}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    solve();

    return 0;
}