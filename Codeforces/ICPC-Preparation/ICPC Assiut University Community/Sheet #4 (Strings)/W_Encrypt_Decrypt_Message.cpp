#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string org = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int n; cin >> n;
    string s; cin >> s;
    if(n == 1){
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<org.size(); j++){
                if(s[i] == org[j]){
                    cout << key[j];
                }
            }
        }

    }
    else{
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<key.size(); j++){
                if(s[i] == key[j]){
                    cout << org[j];
                }
            }
        }
    }
    return 0;
}