#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	for (; t--;) {
		int h, l;
		cin >> a >> b;
		if ((a + b) % 2) {
			cout << "impossible\n";
			continue;
		}
		else if (a < b) {
			cout << "impossible\n";
			continue;
		}
		else {
			h = (a + b) / 2;
			l = (a - b) / 2;
			cout << h << ' ' << l << "\n";
		}
	}
}