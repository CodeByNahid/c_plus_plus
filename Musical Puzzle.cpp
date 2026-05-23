//Problem Link: https://codeforces.com/contest/1833/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
   cin >> n;
    string s;
   cin >> s;
    
   set<pair<int, int>> a;
    for (int i = 1; i < n; i++) {
        a.emplace(s[i - 1], s[i]);
    }
   cout << a.size() << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
