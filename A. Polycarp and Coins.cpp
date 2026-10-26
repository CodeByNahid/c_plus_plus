//Problem Link: https://codeforces.com/contest/1551/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll c2 = (n + 1) / 3;
    ll c1 = n - 2 * c2;
    cout << c1 << " " << c2 << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
