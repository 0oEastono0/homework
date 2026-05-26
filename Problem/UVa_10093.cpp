#include<bits/stdc++.h>
using namespace std;

int t(char a) {
	if (a >= '0' && a <= '9') {
		return (a - '0');
	}
	else if (a >= 'A' && a <= 'Z') {
		return (a - 'A' + 10);
	}
	else if (a >= 'a' && a <= 'z') {
		return (a - 'a' + 36);
	}
	else {
		return 0;
	}
}

int main() {
	string a;
	while (cin >> a) {
		int total = 0, mx = 1;
		for (char i : a) {
			total += t(i);
			mx = (t(i) > mx) ? t(i) : mx;
		}
		int i;
		for (i = mx; i < 62; i++) {
			if (!(total % i)) {
				break;
			}
		}
		if (i == 62) {
			cout << "such number is impossible!\n";
		}
		else if (i < 2) {
			cout << 2 << "\n";
		}
		else {
			cout << i + 1 << "\n";
		}
	}
}