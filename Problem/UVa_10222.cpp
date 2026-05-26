#include<bits/stdc++.h>
using namespace std;

int main() {
	string s = { "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./" };
	string a;
	while (getline(cin, a)) {
		for (int i = 0; i < a.length(); i++) {
			for (int j = 0; j < s.length(); j++) {
				if (a[i] == ' ') {
					cout << " ";
					break;
				}
				else if (a[i] == s[j]) {
					cout << s[j - 2];
					break;
				}
			}
		}
		cout << "\n";
	}
}