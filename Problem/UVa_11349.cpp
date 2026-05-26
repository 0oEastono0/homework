#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		char z, y;
		int x;
		bool check = 1;
		stack<int> a;
		queue<int> b;
		cin >> z >> y >> x;
		x *= x;
		for(int j = 0; j < x; j++) {
			int c = 0;
			cin >> c;
			if (c < 0) check = 0;
			a.push(c);
			b.push(c);
		}
		while (x--) {
			if (a.top() != b.front()) check = 0;
			a.pop();
			b.pop();
		}
		if (check) {
			printf("Test #%d: Symmetric.\n", i + 1);
		}
		else {
			printf("Test #%d: Non-symmetric.\n", i + 1);
		}
	}
}