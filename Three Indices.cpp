//Problem Link: https://codeforces.com/contest/1380/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
        std::cin >> n;
        std::vector<int> p(n);
        for (int i = 0; i < n; ++i)
            std::cin >> p[i];
        int ans = -1;
        for (int i = 0; i + 2 < n; ++i)
            if (p[i] < p[i + 1] && p[i + 1] > p[i + 2])
                ans = i;
        if (ans == -1) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
            std::cout << ans + 1 << " " << ans + 2 << " " << ans + 3 << "\n";
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
