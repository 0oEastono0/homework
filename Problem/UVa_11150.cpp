#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	while (cin >> a) {
		int ans = a;
		while (a > 2) {
			ans += a / 3;
			a = a % 3 + a / 3;
		}
		if (a == 2) {
			ans++;
		}
		cout << ans << "\n";
	}
}