#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void insertdigit()
{
    int n,d;
    cin >> n >> d;
    string s;
    cin >> s;
    for(int i = 0; i < n;i++)
    {
        if(s[i] - '0' < d)
        {
            for(int j = 0;j< i;j++)
            {
                cout << s[j];
            }
            cout << d;
            for(int j = i;j< n;j++)
            {
                cout << s[j];
            }
            cout << endl;
            return;
        }
    }
    cout << s << d << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--) insertdigit();
    return 0;
}