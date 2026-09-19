//Problem Link: https://codeforces.com/contest/1971/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    
    if (a > b) {
        std::swap(a, b);
    }
    if (c > d) {
        std::swap(c, d);
    }
    if (a > c) {
        std::swap(a, c);
        std::swap(b, d);
    }
    if (a < c && c < b && b < d) {
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
