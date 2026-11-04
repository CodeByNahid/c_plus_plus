//problem Link: https://codeforces.com/contest/1833/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<int> o(n), ans(n);
    iota(o.begin(), o.end(), 0);
    sort(o.begin(), o.end(), [&](int i, int j) {
        return a[i] < a[j];
    });
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        ans[o[i]] = b[i];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
