//Problem Link: https://codeforces.com/problemset/problem/1650/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        char a;
        cin >> a;

        bool ok = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == a && i % 2 == 0){
                ok = 1;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
