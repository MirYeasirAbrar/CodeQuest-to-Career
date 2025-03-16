#include <iostream>
using namespace std;

int main()
{
    char ch; cin >> ch;

    if(ch >= 'a' && ch <= 'y')
    {
        ch++;
        cout << ch << endl;
    }
    else if(ch == 'z')
    {
        cout << 'a' << endl; 
    }

    return 0;    
}