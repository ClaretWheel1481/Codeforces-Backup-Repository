#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void gk(){
    int n,sum;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a){
        cin >> i;
    }
    sort(a.begin(),a.end());
    a[0]++;
    sum = a[0];
    for(int i = 1;i< n;i++){
        sum = sum * a[i];
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)gk();
    return 0;
}