#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b; cin >> n >> a >> b;
    int t_sum=0;
    for(int i=1; i<=n; i++){
        int temp, rem, sum = 0;
        temp = i;
        while(temp != 0){
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }
        if(sum >= a && sum <= b){
            t_sum = t_sum + i;
        }
    }
    cout << t_sum << endl;
    return 0;
}
