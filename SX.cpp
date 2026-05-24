//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
namespace rgs = ranges;
void solve(){
    int n;
    cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int min = rgs::min(a);
    int max = rgs::max(a);
    
    int ans = (max - min + 1) / 2;
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
