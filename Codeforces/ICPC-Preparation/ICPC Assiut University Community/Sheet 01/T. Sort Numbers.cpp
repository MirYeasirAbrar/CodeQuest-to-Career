#include <bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c; cin >> a >> b >> c;

    vector <int> x = {a,b,c};
    sort(x.begin(), x.end());
    for(int sorted : x){
        cout << sorted << endl;
    }

    cout << '\n' << a << '\n' << b << '\n' << c << endl;

    return 0;
}