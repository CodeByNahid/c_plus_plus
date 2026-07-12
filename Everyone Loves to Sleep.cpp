//Problem Link: https://codeforces.com/contest/1714/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h, m;
    cin >> n >> h >> m;

    int cur = h * 60 + m;
    int ans = 24 * 60;

    while (n--) {
        int a, b;
        cin >> a >> b;

        int alarm = a * 60 + b;
        int diff;

        if (alarm >= cur)
            diff = alarm - cur;
        else
            diff = 24 * 60 - cur + alarm;

        ans = min(ans, diff);
    }

    cout << ans / 60 << " " << ans % 60 << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
