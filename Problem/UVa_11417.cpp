#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
	while (a % b) {
		a %= b;
		swap(a, b);
	}
	return b;
}

int main() {
	int a;
	while (cin >> a && a) {
		int ans = 0;
		for (int i = 1; i < a; i++){
			for (int j = i + 1; j <= a; j++)
			{
				ans += GCD(i, j);
			}
		}
		cout << ans << "\n";
	}
}