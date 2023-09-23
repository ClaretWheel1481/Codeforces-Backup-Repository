#include <iostream>
#include <string>

using namespace std;


int main(){
    int t;
    string cards;
    cin >> t;
    for(int i = 0;i< t;i++){
        cin >> cards;
        if(cards == "bca" || cards == "cab"){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}