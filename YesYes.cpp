//Problem Link: https://codeforces.com/contest/1759/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
     std::string s;
    std::cin >> s;
    
    const int n = s.length();
    
    std::string t;
    for (int i = 0; i < n; i++) {
        t += "Yes";
    }
    for (int i = 0; i < 3; i++) {
        if (s == t.substr(i, n)) {
            std::cout << "YES\n";
            return;
        }
    }
    std::cout << "NO\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
