#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin >> n;
    string s[n];
    for(int i=0; i<n; i++) cin >> s[i];

    int sum = 0;
    for(int i=0; i<n; i++){
        if(s[i] == "Tetrahedron") sum += 4;
        else if(s[i] == "Cube") sum += 6;
        else if(s[i] == "Octahedron") sum += 8;
        else if(s[i] == "Dodecahedron") sum += 12;
        else sum += 20;
    }
    cout << sum << endl;
    return 0;
}