//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    int noai = (n + (x + y) - 1) / (x + y);

    int ai;

    int maximOnly = (n + x - 1) / x;

    if (maximOnly <= z) {
        ai = maximOnly;
    } else {
        int rem = n - x * z;
        ai = z + (rem + (x + 10 * y) - 1) / (x + 10 * y);
    }

    cout << min(noai, ai) << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
