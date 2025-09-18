#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int c = count(s.begin(), s.end(), '0');
        cout << count(s.begin(), s.begin() + c, '1') << '\n';
    }
    return 0;
}