#include <bits/stdc++.h>
using namespace std;
int main(){

    int a; cin >> a;
    char s; cin >> s;
    int b; cin >> b;

    if(s == '+'){
        cout << a+b << endl;
    }
    else if(s == '-'){
        cout << a-b << endl;
    }
    else if(s == '*'){
        cout << a*b << endl;
    }
    else if(s == '/'){
        cout << a/b << endl;
    }

    return 0;
}