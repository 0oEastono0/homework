#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int a, b, ans = 0;
		cin >> a >> b;
		if (!(a % 2)) {
			a++;
		}
		for (int j = a; j <= b; j += 2) {
			ans += j;
		}
		cout << "Case " << i << ": " << ans << "\n";
	}
}