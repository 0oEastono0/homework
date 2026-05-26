#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int kase = 0;
	while (cin >> t) {
		kase++;
		vector<int> l;
		bool c = 1;
		for (int i = 0; i < t; i++) {
			int a;
			cin >> a;
			l.push_back(a);
		}
		for (int i = 0; i < t; i++) {
			if (i == 0) {
				if (l[i] < 1) c = 0;
			}
			else {
				if (l[i] <= l[i - 1]) c = 0;
			}
		}
		map<int, int> b;
		for (int i = 0; i < t; i++) {
			for (int j = i; j < t; j++) {
				b[l[i] + l[j]]++;
			}
		}
		for (auto i : b) {
			if (i.second > 1) c = 0;
		}
		if (c) {
			printf("Case #%d: It is a B2-Sequence.\n\n", kase);
		}
		else printf("Case #%d: It is not a B2-Sequence.\n\n", kase);
	}
}