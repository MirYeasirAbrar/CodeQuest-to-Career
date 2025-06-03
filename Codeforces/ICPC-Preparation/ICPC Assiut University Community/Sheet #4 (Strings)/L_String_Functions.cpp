#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, query;
    cin >> size >> query;
    string value;
    cin >> value;
    string qu;
    int scope1, scope2;
    while (query--)
    {
        cin >> qu;
        if (qu == "pop_back")
        {
            value.pop_back();
        }
        else if (qu == "front")
        {
            cout << value.front() << endl;
        }
        else if (qu == "back")
        {
            cout << value.back() << endl;
        }
        else if (qu == "sort")
        {
            cin >> scope1 >> scope2;
            sort(value.begin() + min(scope1, scope2) - 1, value.begin() + max(scope1, scope2));
        }
        else if (qu == "reverse")
        {
            cin >> scope1 >> scope2;
            reverse(value.begin() + min(scope1, scope2) - 1, value.begin() + max(scope1, scope2));
        }
        else if (qu == "print")
        {
            int pos;
            cin >> pos;
            cout << value[pos - 1] << endl;
        }
        else if (qu == "substr")
        {
            cin >> scope1 >> scope2; 
            for (int i = min(scope1, scope2) - 1; i <= max(scope1, scope2) - 1; i++)
            {
                cout << value[i];
            }
            cout << endl;
        }
        else
        {
            char c;
            cin >> c;
            value.push_back(c);
        }
    }
}

// fastest 
/*
#include <iostream>
using namespace std;
#define ln long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#define endl '\n'  
int main()
{
    fast int n, q;
    string s;
    cin >> n >> q >> s;
    while (q--)
    {
        int l, r;
        string t;
        cin >> t;
        if (t == "pop_back") s.pop_back();
        else if (t == "front") cout << s.front() << endl;
        else if (t == "back") cout << s.back() << endl;
        else if (t == "sort")
        {
            cin >> l >> r; 
            if (l > r)
                swap(l, r);

            l--; r--;
            sort(s.begin() + l, s.begin() + r + 1);

        }
        else if (t == "reverse")
        {
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            l--; r--;
            reverse(s.begin() + l, s.begin() + r + 1);
        }
        else if (t == "print")
        {
            cin >> l; l--;
            cout << s[l] << endl;
        }
        else if (t == "substr")
        {
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            l--; r--;
            cout << s.substr(l, r - l + 1) << endl;
        }
        else  if (t == "push_back") { char z; cin >> z; s.push_back(z); }

    }

    return 0;
}


*/