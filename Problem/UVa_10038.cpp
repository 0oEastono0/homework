#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	while (cin >> t) {
		int a, b;
		vector<int> se;
		cin >> a;
		for (int i = 1; i < t; i++) {
			cin >> b;
			se.push_back(abs(b - a));
			a = b;
		}
		sort(se.begin(), se.end());
		bool c = 1;
		for (int i = 1; i <= se.size(); i++) {
			if (i != se[i - 1]) {
				c = 0;
				break;
			}
		}
		if (c) cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
}