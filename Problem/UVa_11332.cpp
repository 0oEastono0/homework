#include<bits/stdc++.h>
using namespace std;
#define int long long

int g(int a) {
	int b = 0;
	while (a > 0) {
		b += a % 10;
		a /= 10;
	}
	if (b > 9) {
		return g(b);
	}
	else return b;
}

signed main() {
	int a;
	while (cin >> a && a != 0) {
		cout << g(a) << endl;
	}
}