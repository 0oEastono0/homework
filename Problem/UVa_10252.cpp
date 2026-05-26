#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    while(getline(cin,a)){
        getline(cin,b);
        map<char, int> c;
        for(char i :a){
            c[i]++;
        }
        string d = "";
        for(char i : b){
            if(c[i] > 0){
                c[i]--;
                d += i;
            }
        }
        sort(d.begin(), d.end());
        cout << d << "\n";
        
    }
}
