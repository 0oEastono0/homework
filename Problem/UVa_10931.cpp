	#include<bits/stdc++.h>
	using namespace std;

	int main() {
		int a;
		while (cin >> a && a) {
			string b = "";
			while (a != 0) {
				b += char(a % 2 + '0');
				a /= 2;
			}
			reverse(b.begin(), b.end());
			int c = 0;
			for (char i : b) {
				if (i == '1') c++;
			}
			cout << "The parity of " << b << " is " << c << " (mod 2).\n";;
		}
	}