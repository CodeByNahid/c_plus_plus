//Problem Link: https://codeforces.com/contest/1391/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,m; cin>>n>>m;
  vector<string>v(n);
  for(string &i:v) cin>>i;
  int ans=0;
  for(int i=0;i<n;i++){
      if(v[i][m-1]=='R'){
          ans++;
      }
  }
  for(int i=0;i<m;i++){
      if(v[n-1][i]=='D'){
          ans++;
      }
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
