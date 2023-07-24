#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void wotp(){
    char character[8][8];
    string str;
    for(int i = 0;i<8;i++)
    {
        for(int j = 0;j<8;j++){
            cin >> character[i][j];
            if(character[i][j]!='.'){
                str.push_back(character[i][j]);
            }
        }
    }
    cout << str << endl;
    return ;
}

int main(){
    int t;
    cin >> t;
    while(t--)wotp();
    return 0;
}