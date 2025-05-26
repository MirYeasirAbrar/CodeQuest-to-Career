#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int sum = 0, temp, rem;
    temp = n;
    while(temp!=0){
        rem = temp % 10;
        sum = sum*10 + rem;
        temp = temp/10;
    }
    
    cout << sum << endl;
    if(sum == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
       
    return 0;
}