//Problem Link: https://codeforces.com/contest/1873/problem/E
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
  ll n,x; cin>>n>>x;
  vector<ll>v(n);
  for(ll &i:v) cin>>i;
  ll l=0,h=2000000007;
  while(l<h){
     ll to=0;
      ll m=l+(h-l+1)/2;
      for(ll i:v){
          to+=max(m-i,0ll);
      } 
      if(to<=x){ l=m;}
      else h=m-1;
  }
  cout<<l<<endl;
  
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
