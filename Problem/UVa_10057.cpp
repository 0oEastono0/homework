#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	while (cin >> t) {
		vector<int> l(t);
		for (int i = 0; i < t; i++) {
			cin >> l[i];
		}
		sort(l.begin(), l.end());
		int m1 = l[(t - 1) / 2];
		int m2 = l[t / 2];

		int c = 0;
		for (int i = 0; i < t; i++) {
			if (m1 <= l[i] && m2 >= l[i]) c++;
		}
		cout << m1 << " " << c << " " << m2 - m1 + 1 << "\n";
	}
}