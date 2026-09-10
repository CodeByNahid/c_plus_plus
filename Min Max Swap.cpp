//Problem Link: https://codeforces.com/contest/1631/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    for (auto &i : v1)
        cin >> i;
    for (auto &i : v2)
        cin >> i;
    for (int i = 0; i < n; i++) {
        if (v1[i] > v2[i]) {
            swap(v1[i], v2[i]);
        }
    }
    long long mx1 = *max_element(v1.begin(), v1.end());
    long long mx2 = *max_element(v2.begin(), v2.end());
    cout << mx1 * mx2 << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
