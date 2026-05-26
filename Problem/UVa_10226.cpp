#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string a;
	cin >> t;
	getline(cin, a);
	getline(cin, a);
	while (t--) {
		map<string, int> tree;
		int c = 0;
		while (getline(cin, a) && a != "") {
			tree[a]++;
			c++;
		}
		for (auto i : tree) {
			cout << i.first << " " << fixed << setprecision(4) << (double)i.second / c * 100 << "\n";
		}
		if (t) cout << "\n";
	}
}