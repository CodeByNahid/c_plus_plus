//Problem Link: https://codeforces.com/contest/1607/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
  ll a, b;
    cin >> a >> b;
    ll jumps = b % 4;
    int cnt = 1;
    int j = jumps;
    while (j--) {
        if (a % 2 == 0) {
            a -= b - jumps + cnt;
        }
        else {
            a += b - jumps + cnt;
        }
        cnt++;
    }
    cout << a << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
