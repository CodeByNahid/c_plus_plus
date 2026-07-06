//Problem Link: https://codeforces.com/contest/1363/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
        std::cin >> n >> x;
        int cnt[2] = {};
        for (int i = 0; i < n; ++i) {
            int a;
            std::cin >> a;
            ++cnt[a & 1];
        }
        if (x == n) {
            std::cout << (cnt[1] & 1 ? "Yes" : "No") << "\n";
        } else if (!cnt[1] || (!cnt[0] && !(x & 1))) {
            std::cout << "No\n";
        } else {
            std::cout << "Yes\n";
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
