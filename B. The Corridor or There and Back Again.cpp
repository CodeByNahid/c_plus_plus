//Problem Link: https://codeforces.com/contest/1872/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int ans=INT_MAX;
  int n; cin>>n;
  int d,s; 
  while(n--){
      cin>>d>>s;
      ans = min(ans, d + (s - 1) / 2);
  }
  cout<<ans<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
