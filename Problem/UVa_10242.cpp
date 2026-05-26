#include<bits/stdc++.h>
using namespace std;
#define int double

signed main(){
    int a, b, c, d, e, f, g, h;
    while(cin >> a >> b >> c >> d >> e >> f >> g >> h){
        int x, y;
        if(a == e && b == f){
            x = c + (g - a);
            y = d + (h - b);
        }
        if(a == g && b == h){
            x = c + (e - a);
            y = d + (f - b);
        }
        if(c == e && d == f){
            x = a + (g - c);
            y = b + (h - d);
        }
        if(c == g && d == h){
            x = a + (e - c);
            y = b + (f - d);
        }
        cout << fixed << setprecision(3) << x << " " << y <<"\n";
    }
}