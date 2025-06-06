#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    string s;
    cin >> s;
    int l = 0, r = 0, count = 0;
    vector<string> splits;
    string curr = "";

    for (char c : s) {
        curr += c;
        if (c == 'L') l++;
        else r++;
        if (l == r) {
            splits.push_back(curr);
            curr = "";
            l = r = 0;
        }
    }

    cout << splits.size() << endl;
    for (auto &str : splits) {
        cout << str << endl;
    }
    return 0;
}