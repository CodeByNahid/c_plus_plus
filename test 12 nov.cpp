//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll n;
    cin >> n;

    ll x;
    map<ll, ll> mp;

    for (ll i = 0; i < n; i++) {
        cin >> x;
        mp[x]++;
    }

    ll ans = 0;

    for (auto i : mp) {
        ans += min(2LL, i.second);
    }

    cout << ans << '\n';
    for (auto i : mp) {
        cout << i.first << " ";
    }

    for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
        ll remaining = it->second - 1;

        while (remaining > 0) {
            cout << it->first << " ";
            remaining--;
        }
    }

    cout << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
