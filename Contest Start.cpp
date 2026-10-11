//Problem Link: https://codeforces.com/contest/1539/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void solve(){
  int n, x, t;
        cin >> n >> x >> t;
        int v = t / x;
        if (n <= v) {
            cout << i64(n) * (n - 1) / 2 << "\n";
        } else {
            cout << i64(v) * (v - 1) / 2 + i64(v) * (n - v) << "\n";
        }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
