//A.Rudolf and the Ticket
#include <bits/stdc++.h>

using namespace std;

void rt(){
    int l,r,k,sum = 0;
    cin >> l >> r >> k;
    vector<int> lw(l);
    vector<int> rw(r);
    for(int i =0;i<l;i++)cin >> lw[i];
    for(int j =0;j<r;j++)cin >> rw[j];
    for(int i =0;i < l;i++){
        for(int j = 0;j < r;j++){
            if(lw[i] + rw[j] <=k) sum++;
        }
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)rt();
}