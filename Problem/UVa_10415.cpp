#include<bits/stdc++.h>
using namespace std;

int main() {
	map<char, string> chord = {
		{'c', "0111001111"},
		{'d', "0111001110"},
		{'e', "0111001100"},
		{'f', "0111001000"},
		{'g', "0111000000"},
		{'a', "0110000000"},
		{'b', "0100000000"},
		{'C', "0010000000"},
		{'D', "1111001110"},
		{'E', "1111001100"},
		{'F', "1111001000"},
		{'G', "1111000000"},
		{'A', "1110000000"},
		{'B', "1100000000"},
	};
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string a;
		int p[10] = { 0 };
		bool r[10] = { 0 };
		getline(cin, a);
		for (char i : a) {
			for (int j = 0; j < 10; j++) {
				if (int(chord[i][j] - '0') && r[j] == 0) {
					p[j]++;
					r[j] = 1;
				}
				else if (!(int(chord[i][j] - '0')) && r[j]) {
					r[j] = 0;
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			cout << p[i];
			if (i < 9) {
				cout << " ";
			}
		}
		cout << "\n";

	}

}