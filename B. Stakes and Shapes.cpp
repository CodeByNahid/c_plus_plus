//Problem Link: https://codeforces.com/contest/2278/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, z; cin >> x >> y >> z;
    if (y >= z) {
        cout << string(x + y + z, 'R') << '\n';
        return;
    }
    if (z >= x) {
        cout << string(x + y + z, 'S') << '\n';
        return;
    }
    assert(x >= y);
    cout << string(x + y + z, 'P') << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
