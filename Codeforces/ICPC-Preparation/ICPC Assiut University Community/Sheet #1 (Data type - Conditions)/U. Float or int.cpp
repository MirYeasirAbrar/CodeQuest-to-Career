#include <bits/stdc++.h>
using namespace std;

int main() {
    double N;
    cin >> N;

    long long int_part = (long long)N;

    double decimal_part = N - int_part;

    if (decimal_part < 1e-9) {
        cout << "int " << int_part << endl;
    } else {
        cout << "float " << int_part << " " << decimal_part << endl;
    }

    return 0;
}