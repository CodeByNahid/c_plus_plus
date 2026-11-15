//Problem Link: https://codeforces.com/contest/2285/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n <= 3) {
        cout << -1 << '\n';
        return;
    }

    if (n % 2 == 0) {
        for (int i = n; i >= 1; i--) {
            cout << i << " ";
        }
    }
    else {
        for (int i = n - 1; i >= 1; i--) {
            cout << i << " ";
        }
        cout << n;
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
