//Problem Link: https://codeforces.com/contest/1811/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, b,i=0;
    cin >> n >> b;

    string s;
    cin >> s;
    while (i < n && s[i] >= '0' + b) {
        i += 1;
    }
     s.insert(s.begin() + i, b + '0');

    cout <<s<< '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
