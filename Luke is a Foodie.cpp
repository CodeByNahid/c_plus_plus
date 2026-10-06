//Problem Link: https://codeforces.com/contest/1704/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k; cin>>n>>k;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  int ans=0;
  int mn=v[0],mx=v[0];
  for(int i:v){
      mn=min(i,mn);
      mx=max(i,mx);
      if(mx-mn>2*k){
          ans++;
          mn=mx=i;
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
