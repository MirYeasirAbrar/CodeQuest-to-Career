#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

string n;
long long ans, a;
int main()
{
    cin >> a >> n;
    while (n.find("xxx") != -1){
        n.erase(n.find("xxx"), 1);
        ans++;
    }
    cout << ans << endl;
}