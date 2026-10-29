//Problem Link: https://codeforces.com/contest/1800/problem/B
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k; cin>>n>>k;
  string s; cin>>s;
  map<char,int>mp;
  for(int i:s) mp[i]++;
  int ans=0;
  for(char i='a';i<='z';i++){
      int tem=min(mp[i],mp[toupper(i)]);
      ans+=tem;
      mp[i]-=tem;
      mp[toupper(i)]-=tem;
      
  }
  for(char i='a';i<='z';i++){
      if(mp[i]>=2 && k>=1)
      {
          int tem=min(mp[i]/2,k);
          ans+=tem;
          k-=tem;
      }
      if(mp[toupper(i)]>=2 && k>=1)
      {
          int tem=min(mp[toupper(i)]/2,k);
          ans+=tem;
          k-=tem;
      }
      if(k==0) break;
      
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
