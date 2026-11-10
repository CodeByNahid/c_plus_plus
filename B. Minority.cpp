//Problem Link: https://codeforces.com/contest/1633/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int c[2] {};
    for (auto x : s) {
        c[x - '0']++;
    }
    cout <<min(c[0], c[1]) - (c[0] == c[1]) << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
