#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> k1;
    vector<int> k2;
    vector<int> k3;

    for (int i = 0; i < n; i++) {
        int x;
        string y;
        cin >> x >> y;
        if (y == "01") k1.push_back(x);
        if (y == "10") k2.push_back(x);
        if (y == "11") k3.push_back(x);
    }
    sort(k1.begin(), k1.end());
    sort(k2.begin(), k2.end());
    sort(k3.begin(), k3.end());
    if (!k3.size()) {
        if ((!k1.size()) || (!k2.size())) {
            cout << -1 << endl;
            return;
        }
        cout << k1[0] + k2[0] << endl;
        return;
    }
    int ans = k3[0];
    if (k1.size() && k2.size()) ans = min(ans, k1[0] + k2[0]);
    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
