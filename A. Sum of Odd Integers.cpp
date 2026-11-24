//Problem Link: https://codeforces.com/contest/1327/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k; cin>>n>>k;
  cout << ((n - k) % 2 == 0 && n >= 1ll * k * k ? "YES" : "NO") << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin>>t; while (t--) {
        solve();
    }
return 0;
}
