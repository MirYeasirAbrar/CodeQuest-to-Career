#include <iostream>
using namespace std;

int main()
{
    long long int a, b, c;
    long long int d;
    cin >> a >> b >> c >> d;

    if((a + b - c) == d){
        cout << "YES" << endl;
    }
    else if((a - b + c) == d){
        cout << "YES" << endl;
    }
    else if((a + (b * c)) == d){
        cout << "YES" << endl;
    }
    else if(((a * b) + c) == d){
        cout << "YES" << endl;
    }
    else if((a - (b * c)) == d){
        cout << "YES" << endl;
    }
    else if(((a * b) - c) == d){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;    
}