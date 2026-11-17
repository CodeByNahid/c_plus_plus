//Problem Link: https://codeforces.com/blog/entry/116752
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  string s; cin>>s;
  int ans=1, tem=1;
  for(int i=0;i<n;i++){
      if(s[i]!=s[i-1]) tem=1;
      else tem++;
      ans=max(tem,ans);
  }
  cout<<ans+1<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
