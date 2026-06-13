//Problem Link: https://codeforces.com/contest/2231/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
 
    vector<int> v(n);
 
    int mine = INT_MAX;
 
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mine = min(mine, v[i]);
    }
 
    if(mine == 1) mine++;
 
    long long ans = LLONG_MAX;
 
    while(mine) {
 
        long long cnt = 0;
        bool valid = true;
 
        for(int i = 0; i < n; i++) {
 
            long long x = v[i];
 
            while(x != mine) {
 
                if(x & 1) {
                    x++;
 
                    if(x < mine) {
                        valid = false;
                        break;
                    }
 
                    cnt++;
                }
                else {
                    x /= 2;
                    cnt++;
                }
            }
 
            if(!valid) break;
        }
 
        if(valid) ans = min(ans, cnt);
 
        if(mine == 1) break;
 
        if(mine & 1) mine++;
        else mine /= 2;
    }
 
    cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
