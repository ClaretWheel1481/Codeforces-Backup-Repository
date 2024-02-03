/* ------------------------ B.Not Quite Latin Square ------------------------ */
#include <bits/stdc++.h>

using namespace std;

void NQLS(){
    int z = 0;
    int A = 0,B = 0,C = 0;
    char arr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
            if(arr[i][j] == '?'){
                z = i;
            }
        }
    }
    
    for(int i = 0; i < 3; i++){
        if(arr[z][i] == 'A'){
            A++;
        }else if(arr[z][i] == 'B'){
            B++;
        }else if(arr[z][i] == 'C'){
            C++;
        }
    }

    if(A == 0){
        cout << 'A' << endl;
    }else if(B == 0){
        cout << 'B' << endl;
    }else if(C == 0){
        cout << 'C' << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        NQLS();
    }
    return 0;
}