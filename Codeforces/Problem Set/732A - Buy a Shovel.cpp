#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int k, r;
    cin >> k >> r;

    int quantity = 1;
    int price = k;

    while(price % 10 != 0 && price % 10 != r){
        quantity++;
        price += k;
    }

    cout << quantity << endl;

    return 0;
}