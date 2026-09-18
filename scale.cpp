//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    std::cin >> n >> k;
 
    auto mat = std::vector<std::string>(n);
 
    for (auto& s : mat) {
        std::cin >> s;
    }
 
    for (int i = 0; i < n; i += k) {
        for (int j = 0; j < n; j += k) {
            std::cout << mat[i][j];
        }
        std::cout << "\n";
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
