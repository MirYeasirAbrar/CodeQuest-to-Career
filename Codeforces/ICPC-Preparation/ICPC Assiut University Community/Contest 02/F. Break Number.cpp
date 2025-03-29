#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector <long long> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector <int> count(n, 0);
    for(int i=0; i<n; i++){
        while(a[i] != 0 && a[i] % 2 == 0){
            count[i]++;
            a[i] = a[i] / 2;
        }
    }  
    int max_count = *max_element(count.begin(), count.end());
    cout << max_count << endl;
    return 0;
}