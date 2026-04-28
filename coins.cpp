//Problem Link: https://codeforces.com/problemset/problem/1814/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    long long n, k;
    std::cin >> n >> k;
    
    if (n % 2 == 0 || (k % 2 == 1 && n >= k)) {
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
