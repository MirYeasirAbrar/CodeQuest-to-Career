#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int wordCount = 0;
    bool inWord = false;
    char c;

    while ((c = cin.get()) != '\n') {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else if (c == ' ' || c == '!' || c == '.' || c == '?' || c == ',') {
            inWord = false;
        }
    }

    cout << wordCount << endl;
    return 0;
}