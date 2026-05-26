#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
	while (a %= b) {
		swap(a, b);
	}
	return b;
}

int main() {
	string a;
	int t, x[2];
	cin >> t;
	for(int k = 1; k <= t; k++) {
		for (int i = 0; i < 2; i++) {
			cin >> a;
			x[i] = 0;
			for (int j = 0; j < a.length(); j++) {
				x[i] = x[i] * 2 + int(a[j] - '0');
			}
		}
		if (GCD(x[0], x[1]) > 1) {
			printf("Pair #%d: All you need is love!\n", k);
		}
		else {
			printf("Pair #%d: Love is not all you need!\n", k);
		}
	}
	return 0;
}