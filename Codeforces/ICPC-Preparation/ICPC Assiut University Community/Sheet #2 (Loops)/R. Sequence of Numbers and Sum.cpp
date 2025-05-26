#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;

    while(cin >> n >> m){
        if(n <= 0 || m <= 0){
            break;
        }
        int a = min(m,n);
        int b = max(m,n);
        int sum = 0;
        for(int i = a; i <= b; i++){
            cout << i << " ";
            sum = sum + i;
        }

        cout << "sum =" << sum << endl;
    }
    return 0;
}