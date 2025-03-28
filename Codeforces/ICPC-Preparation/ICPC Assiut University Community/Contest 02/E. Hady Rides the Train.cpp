#include <iostream>
using namespace std;

int main() {
    long long id;
    cin >> id;
    cout << id / 4 << " ";
    if((id/4)%2 == 0){
        cout << id % 4 << endl;
    }
    else{
        if(id%4 == 0){
            cout << 3 << endl;
        }
        else if(id%4 == 1){
            cout << 2 << endl;
        }
        else if(id%4 == 2){
            cout << 1 << endl;
        }
        else if(id%4 == 3){
            cout << 0 << endl;
        }
    }
    return 0;
}
