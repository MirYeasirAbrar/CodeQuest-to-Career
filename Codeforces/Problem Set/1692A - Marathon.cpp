// #include <bits/stdc++.h>
// #define endl '\n'
// using namespace std;

// int main() {
//     cin.tie(nullptr)->sync_with_stdio(false);

//     int t; cin >> t;
//     while(t--){
//     vector<int> a(4);
//     for(auto &x : a) cin >> x;

//     int count = 0;
//     for(int i=1; i<4; i++){
//         if(a[0] < a[i]){
//             count++;
//         }
//     }

//     cout << count << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a0, a1, a2, a3;
        cin >> a0 >> a1 >> a2 >> a3;
        int count = (a0 < a1) + (a0 < a2) + (a0 < a3);
        cout << count << endl;
    }
    return 0;
}