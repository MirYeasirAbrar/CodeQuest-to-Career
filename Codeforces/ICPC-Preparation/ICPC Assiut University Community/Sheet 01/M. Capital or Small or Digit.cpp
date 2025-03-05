#include <iostream>
using namespace std;
 
int main()
{
    char ch; 
    cin >> ch;
 
    int ascii = ch;
 
    if(ch >= 65 && ch <= 90){
        cout << "ALPHA" << '\n' << "IS CAPITAL";
    }
    else if(ch >= 97 && ch <= 122){
        cout << "ALPHA" << '\n' << "IS SMALL";
    }
    else{
        cout << "IS DIGIT";
    }
 
    return 0;
}