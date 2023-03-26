#pragma GCC optimize(2) //O2优化
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void yesyes(string yes){
    for(int i = 0;i<yes.size();i++){
        yes[i] = tolower(yes[i]);
    }
    if(yes == "yes"){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    int t,i = 0;
    cin >> t;
    string yes1;
    while(t--){
        cin >> yes1;
        yesyes(yes1);
    }
}
