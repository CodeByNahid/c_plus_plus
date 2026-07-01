
//Problem Link: https://codeforces.com/contest/1729/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

string m = "abcdefghijklmnopqrstuvwxyz";

void solve() {
    int n;
    cin >> n;

    string s, ans = "";
    cin >> s;

    for (int i = n - 1; i >= 0; i--) {

        if (s[i] != '0') {
            ans.push_back(m[(s[i] - '0') - 1]);
        }
        else {
            int k = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
            ans.push_back(m[k - 1]);
            i -= 2;
        }
    }

    reverse(ans.begin(), ans.end());

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
