#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int c;
		cin >> c;
		vector<int> l;
		while (c--) {
			int a;
			cin >> a;
			l.push_back(a);
		}
		int mid = l.size() / 2;
		int a1 = 0, a2 = 0;
		sort(l.begin(), l.end());
		for (int i = 0; i < l.size(); i++) {
			a1 += abs(l[i] - l[mid]);
			a2 += abs(l[i] - l[mid - 1]);
		}
		cout << min(a1, a2) << "\n";
	}
}