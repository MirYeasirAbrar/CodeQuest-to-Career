#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int temp = n;
        vector<int> a;

        while(temp != 0){
            int rem = temp % 10;
            a.push_back(rem);
            temp /= 10;
        }
        cout << *(min_element(a.begin(), a.end())) << endl;    
    }

    return 0;
}