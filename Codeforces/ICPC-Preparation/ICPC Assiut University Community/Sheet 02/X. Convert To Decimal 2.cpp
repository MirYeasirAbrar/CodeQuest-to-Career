// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; cin >> t;
//     while(t--){
//         int n; cin >> n;
//         int bin=0, rem, count=0;
//         int temp = n;
//         while(temp!=0){
//             if(temp%2!=0){
//             rem = temp%2;
//             bin = 10*bin + rem;
//             }
//             temp = temp/2;
//             count++;
//         }

//         int dec=0;
//         int remp, tem = bin;
//         for(int i=0; i<=count; i++){
//             remp = tem%10;
//             dec = dec + (remp*(pow(2,i)));
//             tem = tem/10;
//         }
//         cout << dec << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;

        // Step 1: Count the number of 1s in binary representation of n
        int ones_count = __builtin_popcount(n);

        // Step 2: Generate the decimal equivalent of a binary number with all ones (of length ones_count)
        int result = (1 << ones_count) - 1;  // (2^ones_count - 1)

        // Step 3: Print the result
        cout << result << endl;
    }

    return 0;
}
