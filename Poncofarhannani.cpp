//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    std::cin >> n;
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        
        ans += (x != 2);
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
