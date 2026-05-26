#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		int temp = a;
		bool c = 1;
		vector<int> ans;
		if (a <= 1 || b <= 1) c = 0;
		if(c){
			while (a >= 1) {
				if (a != 1 && a % b != 0) {
					c = 0;
				}
				ans.push_back(a);
				a /= b;
			}
		}
		if (c) {
			bool d = 0;
			for (int i : ans) {
				if (d) cout << " ";
				cout << i;
				d = 1;
			}
		}
		else cout << "Boring!";
		cout << "\n";
	}
}