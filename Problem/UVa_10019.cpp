#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, temp;
		cin >> a;
		temp = a;
		int a1 = 0, a2 = 0;
		while (temp > 0) {
			a1 += temp % 2;
			temp /= 2;
		}
		temp = a;
		while (temp > 0) {
			if (temp % 10 == 1 || temp % 10 == 2 || temp % 10 == 4 || temp % 10 == 8) {
				a2 += 1;
			}
			else if (temp % 10 == 3 || temp % 10 == 5 || temp % 10 == 6 || temp % 10 == 9) {
				a2 += 2;
			}
			else if (temp % 10 == 7) {
				a2 += 3;
			}
			temp /= 10;
		}
		cout << a1 << " " << a2 << "\n";
	}
}