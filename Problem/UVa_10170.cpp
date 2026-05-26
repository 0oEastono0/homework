#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int a, b, i, j;
	while (cin >> a >> b) {
		j = 0;
		for (i = a; j < b; i++) {
			j += i;
		}
		cout << i - 1 << "\n";
	}
}