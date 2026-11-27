//Problem Link: https://codeforces.com/contest/1389/problem/A
//@CodeByNahid
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
  ll n,m; cin>>n>>m;
  if(m>=n*2){
      cout<<n<<" "<<n*2<<endl;
      return;
  }
  cout<<-1<<" "<<-1<<endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t; while (t--) {
        solve();
    }
return 0;
}
