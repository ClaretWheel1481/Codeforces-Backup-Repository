#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        vector<int> snum(s.size());
        for(int i = 0;i<s.size();i++){
            snum[i] = (int)s[i];
        }
        sort(snum.begin(),snum.end());
        if(snum[0]==snum[3]) {
            cout<<-1<<endl;
            continue;
        }
        else if(snum[0]==snum[2]||snum[1]==snum[3]) {
            cout<<6<<endl;
            continue;
        }else{
            cout<<4<<endl;
        }
    }
}
