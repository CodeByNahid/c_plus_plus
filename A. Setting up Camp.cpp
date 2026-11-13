Problem Link: https://codeforces.com/contest/1945/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
  ll x,y,z; cin>>x>>y>>z;
  
  if((y+2)/3*3>y+z){
      cout<<-1<<endl; return;
  }
  
  cout<<x+(y+2+z)/3<<endl;
  
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
