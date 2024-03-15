//A.Vlad and the Best of Five
#include <bits/stdc++.h>

using namespace std;

void vbf(){
    int aNum = 0,bNum = 0;
    string str;
    cin >> str;
    for(char c : str){
        if(c == 'A')aNum++;
        else bNum++;
    }
    if(aNum >= bNum){
        cout << 'A' << endl;
    }else {
        cout << 'B' << endl;
    }
    aNum = 0;
    bNum = 0;
}

int main() {
    int t;
    cin >> t;
    while(t--)vbf();
    return 0;
}