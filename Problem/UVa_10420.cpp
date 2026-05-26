#include<bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	int t;
	cin >> t;
	map<string, int> d;
	for(;t--;){
		cin >> a;
		getline(cin, b);
		d[a]++;
	}
	for (auto i : d) {
		cout << i.first << " " << i.second << "\n";
	}
}