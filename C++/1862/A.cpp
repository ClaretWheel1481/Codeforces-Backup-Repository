#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void gc(){
    int n,m;
    int a = 0;
    cin >> n >> m;
    vector<string> pdvika(n);
    for(auto &i : pdvika){
        cin >> i;
    }
    vector<char> vika = {'v','i','k','a'};
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(pdvika[j][i] == vika[a]){
                a++;
                break;
            }
        }
    }
    if(a == 4){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    return ;
}

int main(){
    int t;
    cin >> t;
    while(t--)gc();
    return 0;
}