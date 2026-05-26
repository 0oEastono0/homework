#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MX = 1000010;
bool p[MX];

void prime(){
    fill(p, p + MX, 1);
    p[0] = 0;
    p[1] = 0;
    for(int i = 2; i < MX; i++){
        for(int j = i * i; j < MX; j += i){
            p[j] = 0;
        }
    }
}

int r(int a){
    int b = 0;
    while(a > 0){
        b = b * 10 + a % 10;
        a /= 10;
    }
    return b;
}

signed main(){
    int a;
    prime();
    while(cin >> a){
        if(p[a] && a != r(a) && p[r(a)]){
            cout << a << " is emirp.\n";
        }
        else if(p[a]){
            cout << a << " is prime.\n";
        }
        else{
            cout << a << " is not prime.\n";
        }
    }
}