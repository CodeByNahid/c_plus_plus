//Problem Link: https://codeforces.com/contest/1303/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    cin >> s;

    int ans = 0, tem = 0;
    bool f = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            if (f) {
                ans += tem;
                tem = 0;
            }
            f = true;
        }
        else if (f) {
            tem++;
        }
    }

    cout << ans << '\n';
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
