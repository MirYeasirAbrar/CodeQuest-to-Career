#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m; cin >> n >> m;
    vector<vector<char>> str(n, vector<char>(m));
    int flag = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> str[i][j];
            if(str[i][j] != 'W' && str[i][j] != 'B' && str[i][j] != 'G'){
                flag = 1;
            }
        }
    }

    cout << (flag ? "#Color" : "#Black&White") << endl;

    return 0;
}