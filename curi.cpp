//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b;
       cin >> a >> b;
        if (a < b)
           swap(a, b);
        if (a % b) {
            cout << -1 << "\n";
        } else {
            a /= b;
            if (a & (a - 1)) {
                cout << -1 << "\n";
            } else {
                cout << (__lg(a) + 2) / 3 << "\n";
            }
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
