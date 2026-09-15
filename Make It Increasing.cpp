//Problem Link: https://codeforces.com/contest/1675/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    int ans = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i + 1] == 0) {
            std::cout << "-1\n";
            return;
        }
        while (a[i] >= a[i + 1]) {
            a[i] /= 2;
            ans++;
        }
    }
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
