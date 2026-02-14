//Problem Link: https://codeforces.com/contest/2193/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while(t--){
        int n, q; 
        cin >> n >> q;

        vector<long long> a(n), b(n), c(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        long long Max = a[n-1];

        for(int i = n-1; i >= 0; i--){
            long long x = max(b[i], (i == n-1 ? -1LL : a[i+1]));
            Max = max(Max, x);
            c[i] = max(Max, a[i]);
        }

        vector<long long> pref(n);
        pref[0] = c[0];
        for(int i = 1; i < n; i++)
            pref[i] = pref[i-1] + c[i];

        while(q--){
            int l, r;
            cin >> l >> r;
            l--, r--;

            long long ans = pref[r] - (l > 0 ? pref[l-1] : 0);
            cout << ans << " ";
        }
        cout << "\n";
    }
}
