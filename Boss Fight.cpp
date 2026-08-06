//Problem Link: https://codeforces.com/contest/2252/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> mp;

    long long sum = 0;
    for (int &x : v) {
        cin >> x;
        sum += x;
        mp[x]++;
    }

    if (n == 1) {
        cout << v[0] << '\n';
        return;
    }

    int mxFreq = 0, mxVal = 0;
    for (auto [val, freq] : mp) {
        if (freq > mxFreq) {
            mxFreq = freq;
            mxVal = val;
        }
    }

    int others = n - mxFreq;

    if (mxFreq <= others + 1) {
        cout << sum << '\n';
    } else {
        int unused = mxFreq - (others + 2);
        cout << sum - 1LL * unused * mxVal << '\n';
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
