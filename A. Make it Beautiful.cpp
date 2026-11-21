//Problem Link: https://codeforces.com/contest/1783/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    if (a[0] == a[n - 1]) {
        std::cout << "NO\n";
    } else {
        cout << "YES\n";
        reverse(a.begin() + 1, a.end());
        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
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
