#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    vector<int> prog, math, pe;
    for(int i=1; i<=n; i++){
        int x; cin >> x;
        if(x == 1) prog.push_back(i);
        if(x == 2) math.push_back(i);
        if(x == 3) pe.push_back(i);
    }

    int sol = min(prog.size(), min(math.size(), pe.size()));

    cout << sol << endl;
    for(int i=0; i<sol; i++){
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    }
    return 0;
}