#pragma GCC optimize(2) //O2优化
#include<iostream>
#include<cstring>

using namespace std;

char a[1000005],b[1000005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,m;
		cin >> n>>m;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			
		}
		for (int i = 1; i <= m; i++) {
			cin >> b[i];
		}
		int f1 = 0, f2 = 0;
		for (int i = 1; i <= n-1; i++) {
			if (a[i] == a[i + 1])f1++;
		}
		for (int i = 1; i <= m - 1; i++) {
			if (b[i] == b[i + 1])f2++;
		}
		if (f1 > 1 || f2 > 1||(f1==1&&f2==1))cout << "NO" << endl;
		else {
			if (f1 == 0 && f2 == 0)cout << "YES" << endl;
			else {
				if (a[n] == b[m])cout << "NO" << endl;
				else {
					cout << "YES" << endl;
				}
			}
		}
	}
	return 0;
}
