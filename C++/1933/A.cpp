//A. Turtle Puzzle: Rearrange and Negate
#include <bits/stdc++.h>

using namespace std;

void tprn(){
    int n,sum = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
        sum += abs(a[i]);
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        tprn();
    }
    return 0;
}