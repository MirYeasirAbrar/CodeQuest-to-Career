#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m, x, y;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    cin >> x >> y;

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    bool all_x = true;
    for (int d = 0; d < 8; d++) {
        int nx = x - 1 + dx[d];
        int ny = y - 1 + dy[d];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (grid[nx][ny] != 'x') {
                all_x = false;
                break;
            }
        }
    }

    cout << (all_x ? "yes" : "no") << '\n';
    return 0;
}