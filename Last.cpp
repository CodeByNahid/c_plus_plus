//@CodeByNahid

#include <bits/stdc++.h>

using namespace std;





void solve() {

    int n, k;

    std::cin >> n >> k;

    

    n = std::min(n, k);

    

    std::vector<int> s(k);

    for (int i = 0; i < k; i++) {

        int b, c;

        std::cin >> b >> c;

        b--;

        s[b] += c;

    }

    std::sort(s.begin(), s.end(), std::greater());

    

    int ans = std::accumulate(s.begin(), s.begin() + n, 0);

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
