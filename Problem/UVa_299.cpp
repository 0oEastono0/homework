#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t = 0; cin >> t;
	while (t--) {
		vector<int> c;
		int a = 0;
		cin >> a;
		for (int i = 1; i <= a; i++) {
			int b;
			cin >> b;
			c.push_back(b);
		}
		int count = 0;
		for (int i = 0; i < a; i++) {
			for (int j = i + 1; j < a; j++) {
				if (c[i] > c[j]) count++;
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", count);
	}
}