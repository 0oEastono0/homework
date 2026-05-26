#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second != b.second) {
		return a.second < b.second;
	}
	else {
		return a.first > b.first;
	}
}

int main() {
	string a;
	bool e = 0;
	while (getline(cin, a)) {
		if (e) cout << "\n";

		map<int, int> c;
		for (char i : a) {
			c[int(i)]++;
		}

		vector<pair<int, int>> d(c.begin(), c.end());
		sort(d.begin(), d.end(), cmp);
		
		for (auto i : d) {
			cout << i.first << " " << i.second << "\n";
		}
		e = 1;
	}
}