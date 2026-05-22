//Problem Link: https://codeforces.com/contest/1974/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    std::cin >> n;
    
    std::string b;
    std::cin >> b;
    
    int cnt[26] {};
    for (auto c : b) {
        cnt[c - 'a']++;
    }
    
    std::string r;
    for (int i = 0; i < 26; i++) {
        if (cnt[i]) {
            r += char('a' + i);
        }
    }
    
    int mp[26] {};
    for (int i = 0; i < r.size(); i++) {
        mp[r[i] - 'a'] = r[r.size() - 1 - i] - 'a';
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << char('a' + mp[b[i] - 'a']);
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
