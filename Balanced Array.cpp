//ProblemLink: 
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
constexpr int INF = 1e8;
void solve(){
    int n;
        std::cin >> n;
        if (n % 4 != 0) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
            for (int i = 1; i <= n / 4; ++i)
                std::cout << INF - 2 * i << " ";
            for (int i = 1; i <= n / 4; ++i)
                std::cout << INF + 2 * i << " ";
            for (int i = 1; i <= n / 4; ++i)
                std::cout << INF - 2 * i + 1 << " ";
            for (int i = 1; i <= n / 4; ++i)
                std::cout << INF + 2 * i - 1 << " \n"[i == n / 4];
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
