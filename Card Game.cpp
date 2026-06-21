//Problem Link: https://codeforces.com/contest/1999/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, b1, b2;
    std::cin >> a1 >> a2 >> b1 >> b2;

    int ans = 2 * (((a1 > b1) + (a2 > b2) > (a1 < b1) + (a2 < b2)) + ((a1 > b2) + (a2 > b1) > (a1 < b2) + (a2 < b1)));
    std::cout << ans << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
