#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    const int N = 100001;
    vector<int> count(N);
    vector<long long> points(N,0);

    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        count[x]++;
    }

    for(int i=0; i<N; i++){
        points[i] = (long long)i * count[i]; 

        if(i-2 >= 0) points[i] += points[i-2];
        if(i-1 >= 0 && points[i-1] > points[i]) points[i] = points[i-1];
    }

    int max_value = 0;
    for(int i=0; i<N; i++) {
        if(count[i] > 0) max_value = i;
    }

    cout << points[max_value];
    return 0;
}