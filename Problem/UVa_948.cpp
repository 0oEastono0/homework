#include<bits/stdc++.h>
using namespace std;

vector<int> fib(2);
void fib_cal() {
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; fib[i - 1] + fib[i - 2] < 100000000; i++) {
		fib.push_back(fib[i - 1] + fib[i - 2]);
	}
}

int main() {
	int t;
	fib_cal();
	cin >> t;
	while (t--) {
		int a;
		cin >> a;
		int temp = a;
		bool b = 0;
		vector<int> cal;
		for (int i = fib.size() - 1; i > 0; i--){
			if (a - fib[i] >= 0) {
				b = 1;
			}
			if (a - fib[i] >= 0 && b) {
				cal.push_back(1);
				a -= fib[i];
			}
			else if(b){
				cal.push_back(0);
			}
		}
		cout << temp << " = ";
		for (int i : cal) {
			cout << i;
		}
		cout << " (fib)\n";
	}
}