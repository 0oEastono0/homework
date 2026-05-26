#include<bits/stdc++.h>
using namespace std;

bool s[100010] = { 0 };
void sq() {
	for (int i = 0; i * i < 100000; i++) {
		s[i * i] = 1;
	}
}

int main() {
	int a, b;
	sq();
	while (cin >> a >> b) {
		int c = 0;
		if (a == 0 && b == 0) break;
		for (int i = a; i <= b; i++) {
			c += s[i];
		}
		cout << c << "\n";
	}
}