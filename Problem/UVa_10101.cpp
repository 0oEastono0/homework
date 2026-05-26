#include<bits/stdc++.h>
using namespace std;
#define int long long

void cal(int a) {
	if (a >= 10000000) {
		cal(a / 10000000);
		cout << " kuti";
		a %= 10000000;
	}
	if (a >= 100000) {
		cout << " " << a / 100000 << " lakh";
		a %= 100000;
	}
	if (a >= 1000) {
		cout << " " << a / 1000 << " hajar";
		a %= 1000;
	}
	if (a >= 100) {
		cout << " " << a / 100 << " shata";
		a %= 100;
	}
	if (a != 0) {
		cout << " " << a;
	}
}

signed main() {
	int a;
	int t = 1;
	while (cin >> a) {
		cout << setw(4) << t << ".";
		cal(a);
		if (a == 0) cout << " " << 0;
		cout << "\n";
		t++;
	}
}