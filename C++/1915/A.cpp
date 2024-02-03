/* ------------------------------ A.Odd One Out ----------------------------- */
#include <bits/stdc++.h>

using namespace std;

void OOO(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b){
        cout << c << endl;
    }else if(a == c){
        cout << b << endl;
    }else{
        cout << a << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        OOO();
    }
    return 0;
}