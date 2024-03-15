//A.Thorns and Coins
#include <bits/stdc++.h>

using namespace std;

void tc(){
    int n,coins = 0,thorns = 0;
    cin >> n;
    string str;
    cin >> str;
    for(char c : str){
        if(c == '*')thorns++;
        else thorns = 0;
        if(thorns == 2) break;
        if(c == '@')coins++;
    }
    cout << coins << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)tc();
    return 0;
}