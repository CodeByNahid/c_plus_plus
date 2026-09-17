//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
     set<int, greater<int>> s;

    int n,d;
    cin >> n>>d;
 std::vector<int> p(n);
    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
    }
    
    std::sort(p.begin(), p.end(), std::greater());
    
    int ans = 0;
    int r = n;
    for (int i = 0; i < r; i++) {
        int t = d / p[i] + 1;
        if (r - i < t) {
            break;
        }
        r -= t - 1;
        ans++;
    }
    
    std::cout << ans << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}

