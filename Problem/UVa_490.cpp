#include<bits/stdc++.h>
using namespace std;

char m[110][110];

int main() {
	int mlen = 0;
	vector<string> s;
	string a;
	while (getline(cin, a)){
		s.push_back(a);
	}
	for (int i = 0; i < s.size(); i++) {
		mlen = (s[i].length() > mlen) ? s[i].length() : mlen;
	}
	reverse(s.begin(), s.end());
	for (int i = 0; i < mlen; i++) {
		for (string j : s) {
			if (i >= j.length()) {
				cout << " ";
			}
			else cout << j[i];
		}
		cout << "\n";
	}
}