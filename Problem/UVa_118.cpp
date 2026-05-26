#include<bits/stdc++.h>
using namespace std;

map<int, pair<int, int>> M = { {0 , {0, 1}}, {1 , {1, 0}}, {2 , {0, -1}}, {3 , {-1, 0}}};
char Fw[4] = { 'N', 'E', 'S', 'W' };
bool fall[51][51] = {0};
int main(){
	pair<int, int> loc = { 0, 0 };
	int mx, my;
	cin >> mx >> my;
	int x, y, z;
	char f;
	while (cin >> x >> y >> f) {
		bool los = 0;
		if (f == 'N') z = 0; if (f == 'E') z = 1; if (f == 'S') z = 2; if (f == 'W') z = 3;
		string move = "";
		cin >> move;
		for (char i : move) {
			int nx = x, ny = y;
			if (i == 'R') z = (z + 1) % 4; if (i == 'L') z = (z + 3) % 4;
			if (i == 'F') {
				nx += M[z].first;
				ny += M[z].second;
			}
			if (nx > mx || ny > my || nx < 0 || ny < 0) {
				if (!fall[x][y]) {
					fall[x][y] = 1;
					los = 1;
					break;
				}
			}
			else {
				x = nx; y = ny;
			}
		}
		cout << x << " " << y << " " << Fw[z];
		if (los) cout << " LOST";
		cout << "\n";
	}
}