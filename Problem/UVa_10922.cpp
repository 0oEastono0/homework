#include<bits/stdc++.h>
using namespace std;

int cal(string a) {
	int b = 0;
	for (int i = 0; i < a.length(); i++) {
		b += int(a[i] - '0');
	}
	return b;
}

int degree(int a) {
	int c = 1;
	while (a > 9) {
		int b = 0;
		while (a / 10) {
			b += a % 10;
			a /= 10;
		}
		a = b;
		c++;
	}
	return c;
}

int main() {
	string s;
	while (cin >> s && cal(s)) {
		if (!(cal(s) % 9)) {
			cout << s << " is a multiple of 9 and has 9-degree " << degree(cal(s)) << ".\n";
		}
		else {
			cout << s << " is not a multiple of 9.\n";
		}
	}
}

