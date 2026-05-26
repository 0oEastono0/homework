#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	map<char, int> ans;
	string a;
	getline(cin, a);
	while (t--) {
		getline(cin, a);
		for (char i : a) {
			if (isalpha(i)) {
				ans[toupper(i)]++;
			}
		}
	}
	int mn = 0;
	for (auto i : ans) {
		mn = (i.second > mn) ? i.second : mn;
	}
	for (int i = mn; i > 0; i--) {
		for (auto j : ans) {
			if (j.second == i) {
				cout << j.first << " " << j.second << "\n";
			}
		}
	}
}