//Problem Link: https://codeforces.com/contest/1850/problem/D
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k; cin>>n>>k;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  sort(v.begin(), v.end());
  int lst = 0,ans=0;
    for (int i = 1; i <= n; i++) {
        if (i == n || v[i] - v[i - 1] > k) {
            ans = max(ans, i - lst);
            lst = i;
        }
    }
   cout << n - ans << "\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
