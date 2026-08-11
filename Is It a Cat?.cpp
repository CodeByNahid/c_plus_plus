//Problem Link: https://codeforces.com/contest/1800/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    
    int j = 0;
    for (int i = 0; i < 4; i++) {
        char lo = "meow"[i];
        char up = "MEOW"[i];
        if (j == n || (s[j] != lo && s[j] != up)) {
            std::cout << "NO\n";
            return;
        }
        while (j < n && (s[j] == lo || s[j] == up)) {
            j++;
        }
    }
    if (j == n) {
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
