//Problem Link: https://codeforces.com/contest/2044/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,a,b,c; cin>>n>>a>>b>>c;
  int ans=min(n,a)+min(n,b);
  ans+=min(n*2-ans,c);
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
