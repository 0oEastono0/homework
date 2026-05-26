#include<bits/stdc++.h>
using namespace std;

int main() {
	map<int, int> m = { {1, 31}, {2, 28}, {3, 31} , {4, 30} , {5, 31} , {6, 30} , {7, 31} , {8, 31} , {9, 30} , {10, 31} , {11, 30} , {12, 31} };
	map<int, string > w = { {1, "Saturday"}, {2, "Sunday"}, {3, "Monday"}, {4, "Tuesday"}, {5, "Wednesday"}, {6, "Thursday"}, {0, "Friday"} };
	int a, b, t, d;
	cin >> t;
	while (t--) {
		d = 0;
		cin >> a >> b;
		for (int i = 1; i < a; i++) {
			d += m[i];
		}
		d += b;
		cout << w[d % 7] << "\n";
	}
		
}