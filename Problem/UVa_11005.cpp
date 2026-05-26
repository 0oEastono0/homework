#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, c = 1;
	cin >> t;
	while (t--) {
		if (c > 1) cout << "\n";
		printf("Case %d:\n", c++);
		int price[36];
		for (int i = 0; i < 36; i++) {
			cin >> price[i];
		}
		int kase = 0;
		cin >> kase;
		while (kase--) {
			int a, total[37] = { 0 };
			cin >> a;
			int ans = INT_MAX;
			for (int i = 2; i < 37; i++) {
				int temp = a;
				while (temp > 0) {
					total[i] += price[temp % i];
					temp /= i;
				}
				ans = (total[i] < ans) ? total[i] : ans;
			}
			printf("Cheapest base(s) for number %d:", a);
			for (int i = 2; i < 37; i++) {
				if (total[i] == ans) {
					if (i < 37) cout << " ";
					cout << i;
				}
			}
			cout << "\n";
		}
	}
}