#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int books = 0, time = 0, j = 0;

    for(int i=0; i<n; i++){
        while(j < n && time + a[j] <= t){
            time += a[j];
            j++;
        }
        books = max(books , j-i);
        time -= a[i];
    }

    cout << books << endl;
    return 0;
}