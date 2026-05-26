#include<bits/stdc++.h>
using namespace std;

int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

bool m[110][110] = { 0 };

int swp(int a, int b) {
	int total = 0;
	for (int i = 0; i < 8; i++) {
		int nx = a + dx[i]; int ny = b + dy[i];
		if (m[nx][ny]) {
			total++;
		}
	}
	return total;
}

int main() {
	int a, b, c = 1;
	bool d = 0;
	while (cin >> a >> b) {
		memset(m, 0, sizeof(m));
		if (a == 0 && b == 0) {
			break;
		}
		if (d) {
			cout << "\n";
		}

		printf("Field #%d:\n", c);
		string s;
		int t = a;
		int x = 1, y = 1;
		while (t--) {
			cin >> s;
			y = 1;
			for (char i : s) {
				if (i == '.') {
					m[x][y] = 0;
				}
				else if (i == '*') {
					m[x][y] = 1;
				}
				y++;
			}
			x++;
		}

		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				if (!m[i][j]) cout << swp(i, j);
				else cout << "*";
			}
			cout << "\n";
		}

		c++;
		d = 1;
	}
}