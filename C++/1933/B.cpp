//B. Turtle Math: Fast Three Task
#include <bits/stdc++.h>

using namespace std;

void tmftt(){
    int n,num,sum = 0,modnum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
        if(num % 3 == 1) modnum++;
    }
    if(sum % 3 == 1 && modnum != 0){
        cout << 1 << endl;
        return ;
    }
    else if(sum % 3 == 0){
        cout << 0 << endl;
        return ;
    }
    else if(sum % 3 == 2){
        cout << 1 << endl;
        return ;
    }else{
        cout << 2 << endl;
        return ;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) tmftt();
    return 0;
}