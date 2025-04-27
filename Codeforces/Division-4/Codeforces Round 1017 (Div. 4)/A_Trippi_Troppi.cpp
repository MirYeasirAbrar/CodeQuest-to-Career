#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    cin.ignore();


    while(t--){

        string inp;
        getline(cin, inp);
        stringstream ss(inp);
        string word;
        
        while (ss >> word) {
            cout << word[0];
        }
        cout << endl;
    }   
    return 0;
}