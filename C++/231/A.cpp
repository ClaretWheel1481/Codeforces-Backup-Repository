#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c,sum  =0;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if(a+b+c >=2) sum++;
    }
    cout << sum << endl;
}