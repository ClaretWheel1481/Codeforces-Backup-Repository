/* ---------------------------- C. Can I Square? ---------------------------- */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void CIS(){
    int n,num;
    ll sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        sum+=num;
    }
    if(sqrt(sum) - (ll)sqrt(sum) == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        CIS();
    }
    return 0;
}