#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	while (cin >> t && t) {
		vector<string> a(t);
		int top = 1, N = 2, E = 3, temp;
		for (int i = 0; i < t; i++) {
			cin >> a[i];
		}
		for (string b : a) {
			if (b == "north") {
				temp = 7 - N;
				N = top;
				top = temp;
			}
			else if (b == "east") {
				temp = E;
				E = 7 - top;
				top = temp;
			}
			else if (b == "south") {
				temp = N;
				N = 7 - top;
				top = temp;
			}
			else if (b == "west") {
				temp = 7 - E;
				E = top;
				top = temp;
			}
		}
		cout << top << "\n";
	}
}