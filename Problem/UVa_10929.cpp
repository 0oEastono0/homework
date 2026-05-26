#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	while (cin >> a && a != "0") {
		int m = 0, n = 0;
		for (int i = 0; i < a.length(); i += 2) {
			m += int(a[i] - '0');
		}
		for (int i = 1; i < a.length(); i += 2) {
			n += int(a[i] - '0');
		}
		if (abs(m - n) % 11) {
			cout << a << " is not a multiple of 11.\n";
		}
		else {
			cout << a << " is a multiple of 11.\n";
		}
	}
}