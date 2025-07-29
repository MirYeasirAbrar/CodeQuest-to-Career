#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int i,j,k;
    int n,m;

    string s, x;
    cin>>s;

    for(i=0;i<5;i++)
    {
        cin>>x;
        if(x[0]==s[0] || x[1]==s[1])
        {
            cout<<"YES\n";
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}