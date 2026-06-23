//Problem Link: https://codeforces.com/contest/1857/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n * (n - 1) / 2);
    for (int i = 0; i < n * (n - 1) / 2; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    
    for (int i = 0; i < n - 1; i++) {
        std::cout << a[(n - 1 + n - i) * i / 2] << " ";
    }
    std::cout << a.back() << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
