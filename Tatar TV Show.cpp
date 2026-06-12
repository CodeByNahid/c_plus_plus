//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for (int start = 0; start < k; start++) {

        int ones = 0;

        for (int j = start; j < n; j += k) {
            if (s[j] == '1')
                ones++;
        }

        if (ones % 2) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
