//A.Stair,Peak,or Neither?
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a < b && b < c){
        cout  << "STAIR" << endl;
        return ;
    }else if(a < b && b > c){
        cout << "PEAK" << endl;
        return ;
    }else{
        cout << "NONE" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}