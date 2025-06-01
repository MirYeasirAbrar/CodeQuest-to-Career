#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string first = s.substr(0, 3);
        string last = s.substr(s.length() - 3, 3);

        int a = stoi(first);
        int b = stoi(last);

        int asum = 0, bsum = 0;

        while(a!=0){
            int rem = a%10;
            asum += rem;
            a /= 10;
        }

        while(b!=0){
            int rem = b%10;
            bsum += rem;
            b /= 10;
        }
        
        if(asum == bsum){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}