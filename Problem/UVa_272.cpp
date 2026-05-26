#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	bool q = 0;
	while (getline(cin, s)) {
		for (char i : s) {
			if (i == '"') {
				if (!q) {
					cout << "``";
					q = 1;
				}
				else {
					cout << "''";
					q = 0;
				}
			}
			else cout << i;
		}
		cout << "\n";
	}
}