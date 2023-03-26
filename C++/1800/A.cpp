#pragma GCC Optimize(2)
#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <algorithm>
#define x first
#define y second
#define endl '\n'
#define ms(x,y) memset(x,y,sizeof x)
#define ios ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
 
typedef long long LL;
typedef pair<int,int> PII;
typedef pair<double,double> PDD;
typedef pair<double,int> PDI;
typedef pair<char,int> PCI;
typedef pair<string,int> PSI;
typedef pair<int,string> PIS;
typedef pair<LL,LL> PLL;
//typedef __int128 i128;
typedef unsigned long long ULL;
const int N = 40000+ 10,M = N *30 ,INF = 0x3f3f3f3f ;
const double eps = 1e-8;
 
 
 
int n;
string s;
string lo ="meow";
string up ="MEOW";
 
 
inline void solve()
{
    cin >> n >> s;
    int j =0 ;
    
    for(int i=0 ;i < 4 ;i++ )
    {
        if(j == n || (s[j] != lo[i] && s[j] !=up[i]))
        {
            cout << "NO\n";return ;
        }
        while(j < n && (s[j] == lo[i] || s[j] == up[i]))
        j ++ ;
        
    }
    
    
    
    
    if(j == n) cout <<"YES\n";
    else cout<<"NO\n";
}
 
 
 
signed main()
{
//  freopen("1.txt","w",stdout);
     ios
 
    int t=1;
    cin>>t;
    int now = 1;
    while(t -- )
    {
//      cout<<"Case "; 
//      cout<<"Case #"; 
//      cout<< now ++ <<": ";
        solve();
    }
 
 
    return 0;
}
 
