#include<bits/stdc++.h>
using namespace std;

int a, b, c;
char m[110][110];

bool check(int o, int p, int counter) {
	if (o - counter < 0 || o + counter >= a || p - counter < 0 || p + counter >= b) return 0;
	pair<int, int> lu = { o - counter, p - counter};
	pair<int, int> rd = { o + counter, p + counter };
	bool d = 0;
	for (int i = lu.first; i <= rd.first; i++) {
		for (int j = lu.second; j <= rd.second; j++) {
			if (m[i][j] != m[o][p]) return 0;
		}
	}
	return 1;
}

int main() {
	int kas;
	cin >> kas;
	for (; kas--;) {
		cin >> a >> b >> c;
		printf("%d %d %d\n", a, b, c);
		cin.ignore();
		string s;
		for (int i = 0; i < a; i++) {
			getline(cin, s);
			for (int j = 0; j < b; j++) {
				m[i][j] = s[j];
			}
		}
		for (; c--;) {
			int x, y;
			int len = 0;
			cin >> x >> y;
			while (check( x, y, len + 1)) {
				len++;
			}
			cout << len * 2 + 1 << "\n";
		}
	}
}