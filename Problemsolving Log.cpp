//Problem Link : https://codeforces.com/contest/1914/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    std::array<int, 26> cnt{};
    for (auto c : s) {
        cnt[c - 'A'] += 1;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        ans += (cnt[i] > i);
    }
    std::cout << ans << "\n";
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
