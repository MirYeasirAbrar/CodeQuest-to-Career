#include <bits/stdc++.h>
using namespace std;
int cnt(char s[], int i){
    if(s[i] == '\0'){
        return 0;
    }
    int count = cnt(s, i+1);

    if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' ||  s[i] == 'o' ||  s[i] == 'O' ||  s[i] == 'u' ||  s[i] == 'U' ){
        return count+1;
    }
    else{
        return count;
    }
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    char s[201];
    fgets(s, 201, stdin);

    int count = cnt(s,0);
    cout << count;

    

    return 0;
}