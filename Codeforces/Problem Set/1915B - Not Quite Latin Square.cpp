#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--){
    int cntA = 0, cntB = 0, cntC = 0;
    for (int i = 0; i < 9; i++)
    {
        char c;
        cin >> c;

        if (c == 'A')
            cntA++;
        if (c == 'B')
            cntB++;
        if (c == 'C')
            cntC++;
    }

    if (cntA < 3)
        cout << "A\n";
    if (cntB < 3)
        cout << "B\n";
    if (cntC < 3)
        cout << "C\n";
    
    }

    return 0;
}