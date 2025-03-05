#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string multiply_large_numbers(const string& num1, const string& num2) {
    int len1 = num1.length();
    int len2 = num2.length();
    string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + (result[i + j + 1] - '0');
            result[i + j + 1] = sum % 10 + '0';
            result[i + j] += sum / 10;
        }
    }

    result.erase(0, min(result.find_first_not_of('0'), result.size() - 1));
    return result;
}

int main() {
    string A, B, C, D;
    cin >> A >> B >> C >> D;

    string result = multiply_large_numbers(A, multiply_large_numbers(B, multiply_large_numbers(C, D)));
    
    int mod_result = (result.length() <= 2) ? stoi(result) : stoi(result.substr(result.length() - 2));

    cout << setw(2) << setfill('0') << mod_result << endl;

    return 0;
}
