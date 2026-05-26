#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, i;
		double p;
		cin >> n >> p >> i;
		if (p == 0.0) {
			cout << "0.0000\n";
			continue;
		}
		double ans = (pow(1.0 - p, i - 1) * p) / (1.0 - pow(1.0 - p, n));
		cout << fixed << setprecision(4) << ans << "\n";
	}
}