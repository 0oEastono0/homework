#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int d, g, p[110];
		cin >> d;
		cin >> g;
		for (int i = 0; i < g; i++) {
			cin >> p[i];
		}
		bool h[3700];
		fill(h, h + 3700, 0);
		int count = 0;
		for (int i = 0; i < g; i++) {
			for (int j = p[i]; j <= d; j += p[i]) {
				if (j % 7 < 6 && j % 7 > 0 && !h[j]) {
					count++;
					h[j] = 1;
				}
			}
		}
		cout << count << "\n";
	}
}