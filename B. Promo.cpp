//Problem Link: https://codeforces.com/contest/1697/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll &i : v) cin >> i;
    sort(v.rbegin(), v.rend());
    vector<ll> sum(n + 1, 0);
    for (ll i = 0; i < n; i++)
        sum[i + 1] = sum[i] + v[i];
    while (k--) {
        ll x, y;
        cin >> x >> y;
        cout << sum[x] - sum[x - y] << '\n';
    }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
