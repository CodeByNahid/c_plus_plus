//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, r;
    cin >> x >> y >> r;
    for (long long dx = -r; dx <= r; dx++) {
        long long rem = r * r - dx * dx;
        long long dy = sqrt(rem);
        if (dy * dy == rem) {
            cout << x + dx << " " << y + dy << '\n';
            return;
        }
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
