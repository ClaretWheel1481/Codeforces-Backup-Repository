#include <bits/stdc++.h>

using namespace std;

void blankspaces()
{
    int al,blankspace = 0,longestblankspace = 0;
        cin >> al;
        vector<int> a(al);
        for(int i = 0;i<al;i++)
        {
            cin >> a[i];
            if(a[i] == 0) blankspace++;
            else if(a[i] != 0) blankspace = 0;
            longestblankspace = max(blankspace,longestblankspace);
        }
    cout << longestblankspace << endl;
    return ;
}

int main()
{
    int t;
    cin >>t;
    while(t--)blankspaces();
    return 0;
}