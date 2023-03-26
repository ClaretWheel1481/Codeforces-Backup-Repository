#pragma GCC optimize(2) //O2优化
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_set>

using namespace std;

void ICPCB(int n,string yes){
    int sum = 0,i = 0;
    unordered_set<char> uset;
    for(char c : yes){
        uset.insert(c);
        i++;
    }
    cout<<uset.size()+yes.size()<<endl;
}

int main()
{
    int t,n;
    cin >> t;
    string yes;
    while(t--){
        cin >> n>> yes;
        ICPCB(n,yes);
    }
}
