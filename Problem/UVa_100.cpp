#include<bits/stdc++.h>
using namespace std;
#define int long long

int cnt;
map<int, int> l;
int cal(int a) {
	if (a == 1) {
		cnt++;
		return 1;
	}
	if (a % 2) {
		cnt++;
		a = a * 3 + 1;
		return cal(a);
	}
	else {
		cnt++;
		return cal(a /= 2);
	}
}

signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	while (cin >> a >> b) {
		int mn = min(a, b);
		int mx = max(a, b);
		int ans = 0;
		for (int i = mn; i <= mx; i++) {
			cnt = 0;
			cal(i);
			l[i] = cnt;
			ans = (ans > l[i]) ? ans : l[i];
		}
		cout << a << " " << b << " " << ans << '\n';
	}
}