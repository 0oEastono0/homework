#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t;
	int e = 1;
	cin >> t;
	for (; t--;) {
		int a, b, c, d, step = 0;
		cin >> a >> b >> c >> d;
		for (int i = a + b; i < c + d; i++) {
			step += i + 1;
		}
		step += c;
		step -= a;
		a += b + 1 + a;
		c += d + 1 + c;
		c -= a;
		printf("Case %d: %d\n", e, step);
		e++;
	}
}