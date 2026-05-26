#include<bits/stdc++.h>
using namespace std;

const double pi = acos(-1.0);

int main() {
	double a, b;
	string s;
	while (cin >> a >> b >> s) {
		a += 6440.0;
		if (s == "min") {
			b /= 60;
		}
		while (b > 360) b -= 360;
		if (b > 180) {
			b = 360 - b;
		}
		double c = a * 2 * pi * (b / 360.0);
		double d = 2 * a * sin(b / 2 * pi / 180);
		cout << fixed << setprecision(6) << c << " " << d << "\n";
	}
}