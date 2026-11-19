//Problem Link:https://codeforces.com/contest/2126/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k; cin>>n>>k;
  vector<int>v(n);
  for(int &i:v) cin>>i;
  int tem=0;
  int ans=0;
  for(int i=0;i<n;i++){
      if(v[i]==0) tem++;
      else tem=0;
      if(tem>=k){
          ans++;
          tem=0;
          i++;
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
