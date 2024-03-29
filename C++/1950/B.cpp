//B.Upscaling
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    for(int i = 0; i < n * 2; ++i){
        for(int j = 0; j < n * 2; ++j){
            // 题解出自Bilibili @RegenFallen ，十分感谢解答我的疑惑。视频地址：https://www.bilibili.com/video/BV16K421e7Yi/
            int x = i % 4 <=1,y = j % 4 <= 1;
            if(x ==y) cout << '#';
            else cout << '.';
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}