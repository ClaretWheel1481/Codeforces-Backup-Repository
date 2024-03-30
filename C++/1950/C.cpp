//C.Clock Conversion
#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;
    int h = stoi(s.substr(0, 2));
    if(s == "12:00"){
        cout << s << " " << "PM" << endl;
        return;
    }
    if(h - 12 >= 10){
        s.replace(0, 2, to_string(h - 12));
        cout << s << " " << "PM" << endl;
        return ;
    }
    if(h < 12 && h > 0){
        cout << s << " " << "AM" << endl;
    }else if(h == 12){
        cout << s << " " << "PM" << endl;
    }else if(h == 0){
        s.replace(0,2,"12");
        cout << s << " " << "AM" << endl;
    }else{
        s.replace(0, 2, to_string(h - 12));
        cout <<"0" <<  s << " " << "PM" << endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}