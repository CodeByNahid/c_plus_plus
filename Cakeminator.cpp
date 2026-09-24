//Problem Link: https://codeforces.com/contest/330/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int r, c;
    cin >> r >> c;
 
    vector<string> cake(r);
    for (int i = 0; i < r; i++) {
        cin >> cake[i];
    }
 
    int ans = 0;
 
    for (int i = 0; i < r; i++) {
        bool safe = true;
 
        for (int j = 0; j < c; j++) {
            if (cake[i][j] == 'S') {
                safe = false;
                break;
            }
        }
 
        if (safe) {
            ans += c;
            for (int j = 0; j < c; j++) {
                cake[i][j] = 'E'; 
            }
        }
    }
 
    for (int j = 0; j < c; j++) {
        bool safe = true;
 
        for (int i = 0; i < r; i++) {
            if (cake[i][j] == 'S') {
                safe = false;
                break;
            }
        }
 
        if (safe) {
            for (int i = 0; i < r; i++) {
                if (cake[i][j] == '.') {
                    ans++;
                    cake[i][j] = 'E';
                }
            }
        }
    }
 
    cout << ans << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
