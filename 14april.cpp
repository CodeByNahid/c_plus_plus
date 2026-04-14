//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
        std::cin >> n;
        int one = 0, two = 0;
        for (int i = 0; i < n; i++) {
            int a;
            std::cin >> a;
            if (a == 1) {
                one++;
            } else {
                two++;
            }
        }
        int total = one + 2 * two;
        if (total % 2 == 0 && (total % 4 == 0 || one > 0)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
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
