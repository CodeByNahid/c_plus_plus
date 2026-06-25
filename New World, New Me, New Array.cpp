//Problem Link: https://codeforces.com/contest/2072/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, p;
    std::cin >> n >> k >> p;
    
    k = std::abs(k);
    if (k > n * p) {
        std::cout << -1 << "\n";
    } else {
        std::cout << (k + p - 1) / p << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
