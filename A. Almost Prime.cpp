//Problem Link: https://codeforces.com/contest/26/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
    std::cin >> n;
    
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        int cnt = 0;
        int x = i;
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                cnt += 1;
                while (x % j == 0) {
                    x /= j;
                }
            }
        }
        cnt += (x > 1);
        ans += (cnt == 2);
    }
    std::cout << ans << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
  // int t=1; while (t--) {
        solve();
   // }
return 0;
}
