//Problem Link: https://codeforces.com/contest/2009/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int x, y, k;
    std::cin >> x >> y >> k;
    
    x = (x + k - 1) / k;
    y = (y + k - 1) / k;
    
    std::cout << std::max(2 * x - 1, 2 * y) << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
