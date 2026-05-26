#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main() {
	int a, b;
	while (cin >> a >> b) {
		int c = 0, d = 0;
		if (a == 0 && b == 0) {
			break;
		}
		while (a > 0 || b > 0) {
			if (a % 10 + b % 10 + c > 9) {
				c = 1;
				d++;
			}
			else c = 0;
			a /= 10;
			b /= 10;
		}
		if (d > 1) {
			printf("%lld carry operations.\n", d);
		}
		else if (d == 1) {
			printf("1 carry operation.\n");
		}
		else printf("No carry operation.\n");
	}
}