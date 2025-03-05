#include <bits/stdc++.h>
using namespace std;
int main(){
    int a; cin >> a;
    char s; cin >> s;
    int b; cin >> b;
    char q; cin >> q;
    long long int c; cin >> c;

    if (s == '+'){
        if (c == (a+b)){
            cout << "Yes" << endl;
        }
        else{
            cout << a << " + " << b << " = " << a+b << endl; 
        }
    }
    else if (s == '-'){
        if (c == (a-b)){
            cout << "Yes" << endl;
        }
        else{
            cout << a << " - " << b << " = " << a-b << endl; 
        }
    }
    else if (s == '*'){
        if (c == (a*b)){
            cout << "Yes" << endl;
        }
        else{
            cout << a << " * " << b << " = " << a*b << endl; 
        }
    }
    return 0;
}