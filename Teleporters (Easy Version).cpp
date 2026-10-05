//Problem Link: https://codeforces.com/contest/1791/problem/G1
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
  int n,k; cin>>n>>k;
  vector<int>v(n);
  int x;
  for(int i=0;i<n;i++){
      cin>>x;
      v[i]=x+1+i;
  }
  sort(v.begin(), v.end());
  int ans=0;
 for(int i=0;i<n;i++){
      
      if(v[i]<=k){
          ans++;
          k-=v[i];
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
