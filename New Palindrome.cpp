//Problem Link: https://codeforces.com/contest/1832/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;

    set<char> st(s.begin(), s.end());

    if (st.size() >= 3) {
        cout << "Yes\n";
        return;
    }
    if (st.size() == 2) {
        map<char, int> mp;
        for (char c : s) mp[c]++;

        int cnt = 0;
        for (auto p : mp) {
            if (p.second >= 2) cnt++;
        }

        cout << (cnt > 1 ? "Yes" : "No") << '\n';
    } else {
        cout << "No\n";
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
