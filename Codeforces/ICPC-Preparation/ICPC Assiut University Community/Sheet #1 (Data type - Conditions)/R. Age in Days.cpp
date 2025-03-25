#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int year, month, r_days;

    year = n / 365;
    r_days = n % 365;

    month = r_days / 30;
    r_days = r_days % 30;

        
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << r_days << " days" << endl;
    return 0;
}