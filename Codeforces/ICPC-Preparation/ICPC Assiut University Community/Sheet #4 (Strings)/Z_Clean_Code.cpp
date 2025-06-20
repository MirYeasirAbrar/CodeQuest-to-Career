#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    string source;
    bool isStartMultiComment = 0;
    while (getline(cin, source))
    {
        bool isNotComment = false;
        if (source.size() == 0 || source == " ")
        {
            continue;
        }

        for (int i = 0; i < source.size(); i++)
        {
            if (source[i] == '/' && source[i + 1] == '/' && !isStartMultiComment)
            {
                break;
            }
            else if (source[i] == '/' && source[i + 1] == '*')
            {
                i++;
                isStartMultiComment = true;
            }
            else if (source[i] == '*' && source[i + 1] == '/' && isStartMultiComment)
            {
                i++;
                isStartMultiComment = false;
            }
            else if (!isStartMultiComment)
            {

                cout << source[i];
                isNotComment = true;
            }
        }

        if (isNotComment && !isStartMultiComment)
            cout << endl;
    }
    return 0;
}