
//Problem Link: https://codeforces.com/contest/1931/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    std::cin >> n;
    n -= 3;
    
    for (int i = 1; i <= 3; i++) {
        int x = std::max(0, n - (3 - i) * 25);
        n -= x;
        std::cout << char('a' + x);
    }
    std::cout << "\n";
}
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
