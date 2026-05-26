#include<bits/stdc++.h>
using namespace std;
int a, b;

bool cmp(int m, int n) {
	if (m % b != n % b) {
		return (m % b) < (n % b);
	}
	bool m2 = m % 2 == 0;
	bool n2 = n % 2 == 0;
	if (m2 != n2) return n2;
	if (m2) return m < n;
	else return m > n;
}

int main() {
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			cout << 0 << " " << 0 << "\n";
			break;
		}
		cout << a << " " << b << '\n';
		vector<int> l;
		while (a--) {
			int c = 0;
			cin >> c;
			l.push_back(c);
		}
		sort(l.begin(), l.end(), cmp);
		for (int i : l) {
			cout << i << "\n";
		}
	}
}