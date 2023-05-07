#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "codeforces";
    int t;
    cin >> t;
    while(t--)
    {
        int sum = 0;
        string str;
        cin >> str;
        for(int i = 0;i<s.size();i++)
        {
            if(str[i] != s[i]) sum++;
        }
        cout << sum << endl;
    }
    return 0;
}