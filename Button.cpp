//Problem Link: https://codeforces.com/contest/268/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
   long long n;
    cin >> n;
    long long ans = n;
    for (long long i = 1; i <= n; i++) {
        ans += (n - i) * i;
    }
    cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t=1; while (t--) {
        solve();
    }
return 0;
}
