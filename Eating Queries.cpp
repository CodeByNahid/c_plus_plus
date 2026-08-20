//Problem Link: https://codeforces.com/contest/1676/problem/E
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
int ans(vector<long long>& v, long long x) {
    int i = 0, j = v.size() - 1;
    int result = -1;

    while (i <= j) {
        int mid = i + (j - i) / 2;

        if (v[mid] >= x) {
            result = mid + 1; 
            j = mid - 1;
        } 
        else {
            i = mid + 1;
        }
    }

    return result;
}

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> v(n);

    for (long long &i : v)
        cin >> i;

  sort(v.rbegin(), v.rend());
    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1];
    }

    while (q--) {
        long long x;
        cin >> x;

        cout << ans(v, x) << '\n';
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
