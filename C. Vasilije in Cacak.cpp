//Problem Link: https://codeforces.com/contest/1878/problem/C
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
  ll n,k,x;
      cin>>n>>k>>x;
      ll minsum=k*(k+1)/2;
      
      ll maxsum=(n*(n+1))/2 -((n-k)*(n-k+1))/2;
      
      if(x>=minsum && x<=maxsum)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
