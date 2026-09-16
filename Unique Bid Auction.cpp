//Problem Link: https://codeforces.com/contest/1454/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;
        std::cin >> n;
        std::vector<int> a(n), c(n);
        for (int i = 0; i < n; ++i) {
            int x;
            std::cin >> x;
            --x;
            ++c[x];
            a[x] = i;
        }
        int ans = 0;
        while (ans < n && c[ans] != 1) ++ans;
        std::cout << (ans == n ? -1 : a[ans] + 1) << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
