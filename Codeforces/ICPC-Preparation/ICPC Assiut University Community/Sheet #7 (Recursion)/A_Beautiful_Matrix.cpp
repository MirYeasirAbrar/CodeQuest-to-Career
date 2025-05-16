#include <bits/stdc++.h>
using namespace std;

int main() {
	int r = 5, c = 5;

    int a[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
        // if(a[i][j] == 1){
        //         c1 = i;
        //         c2 = j;
        //         break;
        //     } 
    }
    int c1, c2;
    bool found = false;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j] != 0){
                c1 = i;
                c2 = j;
                found = true;
                break;
            }            
        }
        if (found) break;
    } 
    printf("%d", abs(c1-2) + abs(c2-2));
  
    return 0;
}