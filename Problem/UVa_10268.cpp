#include<bits/stdc++.h>
using namespace std;

int main() {
	int x, a;
	for (; cin >> x;) {
		int b = 0, c = 0;
		while(cin >> a) {
			c = c * x + b;
			b = b * x + a;
			if (getchar() == '\n') break;
		}
		cout << c << "\n";
	}
}