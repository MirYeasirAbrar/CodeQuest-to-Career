#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
using namespace std;

int main() {
    cpp_int A, B, C, D;
    
    cin >> A >> B >> C >> D;
    
    cpp_int result = (A * B * C * D) % 100;  // Compute modulo 100
    
    cout << setw(2) << setfill('0') << result << endl;  // Ensure two-digit output
    
    return 0;
}
