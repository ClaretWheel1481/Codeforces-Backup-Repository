//A. Setting up Camp
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int i,e,u,u1;
    int sum = 0;
    cin >> i >> e >> u;
    sum += i;
    if (e%3==0){
        sum+=e / 3;
        sum+= ceil(u/3.0);  //向上取整
        cout<<sum<<endl;
    }else if (e%3+u>=3){
        sum+= ceil((e+u)/3.0);
        cout<<sum<<endl;
    }else{
        cout<<-1<<endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}