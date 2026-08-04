//https://codeforces.com/contest/2254/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> v(3);

    for (int &i : v) cin >> i;

    set<int> st(v.begin(), v.end());
    int ans = 0;

    while (st.size() > 2) {
        sort(v.begin(), v.end());
        v[0]++;
        v[2]--;

        st = set<int>(v.begin(), v.end());  
        ans++;
    }

    cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
