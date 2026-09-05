//Problem Link: https://codeforces.com/contest/1551/problem/B1
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    std::string s;
    std::cin >> s;
    int n = s.length();
    
    std::vector<int> cnt(26);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int c = s[i] - 'a';
        if (cnt[c] < 2) {
            cnt[c]++;
            ans++;
        }
    }
    
    ans /= 2;
    std::cout << ans << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
